#ifndef PS_SRC_PS_VERIFIER_H_
#define PS_SRC_PS_VERIFIER_H_

#include "ps-encoding.h"

using namespace mcl::bls12;

/**
 * The verifier who wants to verify a user's ownership of a PS credential.
 */
class PSVerifier {
public:
  /**
   * @brief Construct a new PSVerifier object
   *
   * @param pk The public key of the PSSigner.
   */
  PSVerifier(const PSPubKey& pk);

  /**
   * @brief Verify the signature over the given attributes (all in plaintext).
   *
   * @param sig input The PS signature.
   * @param all_attributes, the attributes in the same order as when the PS signature is requested. All in plaintext.
   * @return true if the signature is valid.
   */
  bool
  verify(const PSCredential& sig, const std::vector<std::string>& all_attributes) const;

  /**
   * @brief EL PASSO VerifyID
   *
   * This function will:
   *  -# verify the NIZK proof of the PS signature, ID recovery token, and Phi.
   *  -# verify the PS signature over the committed attributes and the plaintext attributes.
   *
   * @param proof input The ProveID message generated by a certificate owner.
   * @param associated_data, input, an associated data (e.g., session ID) bound with the NIZK proof used for authentication.
   * @param service_name, input, the RP's service name, e.g., RP's domain name.
   * @param authority_pk, input, the EL Gamal public key (a G1 point) of an accountability authority.
   * @param g, input, a G1 point that both prover and verifier agree on for NIZK of the identity retrieval token
   * @param h, input, a G1 point that both prover and verifier agree on for NIZK of the identity retrieval token
   * @return true if both the NIZK proof and signature are valid.
   */
  bool
  el_passo_verify_id(const IdProof& proof,
                     const std::string& associated_data,
                     const std::string& service_name,
                     const G1& authority_pk, const G1& g, const G1& h) const;

  bool
  el_passo_verify_id_without_id_retrieval(const IdProof& proof,
                                          const std::string& associated_data,
                                          const std::string& service_name) const;

private:
  G2
  prepare_hybrid_verification(const G2& k, const std::vector<std::string>& attributes) const;

private:
  PSPubKey m_pk;  // public key
};

#endif  // PS_SRC_PS_VERIFIER_H_