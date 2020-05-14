#include <protobuf-encoding.h>
#include <ps.h>

#include <iostream>

using namespace mcl::bls12;
char m_buf[128];

void
test_pk_with_different_attr_num()
{
  std::cout << "****test_pk_with_different_attr_num Start****" << std::endl;
  G1 g;
  G2 gg;
  hashAndMapToG1(g, "abc");
  hashAndMapToG2(gg, "edf");

  Fr num;
  num.setByCSPRNG();

  size_t size = g.serialize(m_buf, sizeof(m_buf));
  std::cout << "G1 element size: " << size << std::endl;
  size = gg.serialize(m_buf, sizeof(m_buf));
  std::cout << "G2 element size: " << size << std::endl;
  size = num.serialize(m_buf, sizeof(m_buf));
  std::cout << "Fr element size: " << size << std::endl;

  PSSigner idp(3, g, gg);
  auto [pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi] = idp.key_gen();
  auto pk_msg = protobuf_encode_ps_pk(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  std::cout << "3 total attributes. Public Key Size: " << pk_msg->SerializeAsString().size() << std::endl;

  PSSigner idp2(20, g, gg);
  std::tie(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi) = idp2.key_gen();
  pk_msg = protobuf_encode_ps_pk(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  std::cout << "20 total attributes. Public Key Size: " << pk_msg->SerializeAsString().size() << std::endl;
  std::cout << "****test_pk_with_different_attr_num ends without errors****\n"
            << std::endl;
}

void
test_ps_sign_verify()
{
  std::cout << "****test_ps_sign_verify Start****" << std::endl;
  G1 g;
  G2 gg;
  hashAndMapToG1(g, "abc");
  hashAndMapToG2(gg, "edf");
  PSSigner idp(3, g, gg);
  auto [pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi] = idp.key_gen();
  auto pk_msg = protobuf_encode_ps_pk(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);

  PSRequester user;
  protobuf_decode_ps_pk(*pk_msg, pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  user.init_with_pk(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  std::vector<std::tuple<std::string, bool>> attributes;
  attributes.push_back(std::make_tuple("secret1", true));
  attributes.push_back(std::make_tuple("secret2", true));
  attributes.push_back(std::make_tuple("plain1", false));
  auto [request_A, request_c, request_rs, request_attributes] = user.generate_request(attributes, "hello");
  auto request_msg = protobuf_encode_sign_request(request_A, request_c, request_rs, request_attributes);

  protobuf_decode_sign_request(*request_msg, request_A, request_c, request_rs, request_attributes);
  G1 sig1, sig2;
  if (!idp.sign_cred_request(request_A, request_c, request_rs, request_attributes, "hello", sig1, sig2)) {
    std::cout << "sign request failure" << std::endl;
    return;
  }
  auto credential_msg = protobuf_encode_ps_credential(sig1, sig2);

  protobuf_decode_ps_credential(*credential_msg, sig1, sig2);
  auto [ubld_sig1, ubld_sig2] = user.unblind_credential(sig1, sig2);
  std::vector<std::string> all_attributes;
  all_attributes.push_back("secret1");
  all_attributes.push_back("secret2");
  all_attributes.push_back("plain1");
  if (!user.verify(ubld_sig1, ubld_sig2, all_attributes)) {
    std::cout << "unblinded credential verification failure" << std::endl;
    return;
  }

  auto [rand_sig1, rand_sig2] = user.randomize_credential(ubld_sig1, ubld_sig2);
  if (!user.verify(rand_sig1, rand_sig2, all_attributes)) {
    std::cout << "randomized credential verification failure" << std::endl;
    return;
  }
  std::cout << "****test_ps_sign_verify ends without errors****\n"
            << std::endl;
}

void
test_el_passo(size_t total_attribute_num)
{
  std::cout << "****test_el_passo Start****" << std::endl;
  G1 g;
  G2 gg;
  hashAndMapToG1(g, "abc");
  hashAndMapToG2(gg, "edf");
  PSSigner idp(total_attribute_num, g, gg);

  // IDP-KeyGen
  auto begin = std::chrono::steady_clock::now();
  auto [pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi] = idp.key_gen();
  auto end = std::chrono::steady_clock::now();
  std::cout << "IDP-KeyGen over " << total_attribute_num << " attributes: "
            << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
            << "[µs]" << std::endl;
  auto pk_msg = protobuf_encode_ps_pk(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  std::cout << "Public Key Response Packet Size: " << pk_msg->SerializeAsString().size() << std::endl;

  // User-RequestID
  protobuf_decode_ps_pk(*pk_msg, pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  PSRequester user;
  user.init_with_pk(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  std::vector<std::tuple<std::string, bool>> attributes;
  attributes.push_back(std::make_tuple("s", true));
  attributes.push_back(std::make_tuple("gamma", true));
  attributes.push_back(std::make_tuple("tp", false));
  begin = std::chrono::steady_clock::now();
  auto [request_A, request_c, request_rs, request_attributes] = user.generate_request(attributes, "hello");
  end = std::chrono::steady_clock::now();
  std::cout << "User-RequestID: "
            << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
            << "[µs]" << std::endl;
  auto request_msg = protobuf_encode_sign_request(request_A, request_c, request_rs, request_attributes);
  std::cout << "Setup Request Packet Size: " << request_msg->SerializeAsString().size() << std::endl;

  // IDP-ProvideID
  protobuf_decode_sign_request(*request_msg, request_A, request_c, request_rs, request_attributes);
  G1 sig1, sig2;
  begin = std::chrono::steady_clock::now();
  bool sign_result = idp.sign_cred_request(request_A, request_c, request_rs, request_attributes, "hello", sig1, sig2);
  end = std::chrono::steady_clock::now();
  std::cout << "IDP-ProvideID: "
            << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
            << "[µs]" << std::endl;
  auto credential_msg = protobuf_encode_ps_credential(sig1, sig2);
  std::cout << "Setup Response Packet Size: " << credential_msg->SerializeAsString().size() << std::endl;
  if (!sign_result) {
    std::cout << "sign request failure" << std::endl;
    return;
  }

  // User-UnblindID
  protobuf_decode_ps_credential(*credential_msg, sig1, sig2);
  begin = std::chrono::steady_clock::now();
  auto [ubld_sig1, ubld_sig2] = user.unblind_credential(sig1, sig2);
  end = std::chrono::steady_clock::now();
  std::cout << "User-UnblindID: "
            << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
            << "[µs]" << std::endl;

  // User-ProveID
  G1 authority_pk;
  G1 h;
  hashAndMapToG1(authority_pk, "ghi");
  hashAndMapToG1(h, "jkl");
  begin = std::chrono::steady_clock::now();
  auto [prove_id_sig1, prove_id_sig2, prove_id_k, prove_id_phi, prove_id_E1,
        prove_id_E2, prove_id_c, prove_id_rs, prove_id_plaintext_attributes] =
      user.el_passo_prove_id(ubld_sig1, ubld_sig2, attributes, "hello", "service", authority_pk, g, h);
  end = std::chrono::steady_clock::now();
  std::cout << "User-ProveID: "
            << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
            << "[µs]" << std::endl;
  auto prove_id_msg = protobuf_encode_prove_id(prove_id_sig1, prove_id_sig2, prove_id_k, prove_id_phi, prove_id_E1,
                                               prove_id_E2, prove_id_c, prove_id_rs, prove_id_plaintext_attributes);
  std::cout << "Sign-on Request Packet Size: " << prove_id_msg->SerializeAsString().size() << std::endl;

  // RP-VerifyID
  protobuf_decode_prove_id(*prove_id_msg, prove_id_sig1, prove_id_sig2, prove_id_k, prove_id_phi, prove_id_E1,
                           prove_id_E2, prove_id_c, prove_id_rs, prove_id_plaintext_attributes);
  PSRequester rp;
  rp.init_with_pk(pk_g, pk_gg, pk_XX, pk_Yi, pk_YYi);
  begin = std::chrono::steady_clock::now();
  bool result = rp.el_passo_verify_id(
      prove_id_sig1, prove_id_sig2, prove_id_k, prove_id_phi, prove_id_E1,
      prove_id_E2, prove_id_c, prove_id_rs, prove_id_plaintext_attributes,
      "hello", "service", authority_pk, g, h);
  end = std::chrono::steady_clock::now();
  std::cout << "RP-VerifyID: "
            << std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count()
            << "[µs]" << std::endl;

  if (!result) {
    std::cout << "EL PASSO Verify ID failed" << std::endl;
  }

  std::cout << "****test_el_passo ends without errors****\n"
            << std::endl;
}

int
main(int argc, char const *argv[])
{
  initPairing();
  test_pk_with_different_attr_num();
  test_el_passo(3);
}
