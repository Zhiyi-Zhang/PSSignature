// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ps.proto

#include "ps.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class PubKeyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PubKey> _instance;
} _PubKey_default_instance_;
class CredentialDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Credential> _instance;
} _Credential_default_instance_;
class CredRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CredRequest> _instance;
} _CredRequest_default_instance_;
static void InitDefaultsscc_info_CredRequest_ps_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_CredRequest_default_instance_;
    new (ptr) ::CredRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::CredRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CredRequest_ps_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CredRequest_ps_2eproto}, {}};

static void InitDefaultsscc_info_Credential_ps_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_Credential_default_instance_;
    new (ptr) ::Credential();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Credential::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Credential_ps_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Credential_ps_2eproto}, {}};

static void InitDefaultsscc_info_PubKey_ps_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_PubKey_default_instance_;
    new (ptr) ::PubKey();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::PubKey::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PubKey_ps_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PubKey_ps_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ps_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ps_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ps_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ps_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PubKey, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::PubKey, g_),
  PROTOBUF_FIELD_OFFSET(::PubKey, yi_),
  PROTOBUF_FIELD_OFFSET(::PubKey, gg_),
  PROTOBUF_FIELD_OFFSET(::PubKey, xx_),
  PROTOBUF_FIELD_OFFSET(::PubKey, yyi_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Credential, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::Credential, sig1_),
  PROTOBUF_FIELD_OFFSET(::Credential, sig2_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::CredRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::PubKey)},
  { 10, -1, sizeof(::Credential)},
  { 17, -1, sizeof(::CredRequest)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_PubKey_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Credential_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_CredRequest_default_instance_),
};

const char descriptor_table_protodef_ps_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\010ps.proto\"D\n\006PubKey\022\t\n\001g\030\001 \001(\014\022\n\n\002Yi\030\002 "
  "\003(\014\022\n\n\002gg\030\003 \001(\014\022\n\n\002XX\030\004 \001(\014\022\013\n\003YYi\030\005 \003(\014"
  "\"(\n\nCredential\022\014\n\004sig1\030\001 \001(\014\022\014\n\004sig2\030\002 \001"
  "(\014\"\r\n\013CredRequestb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ps_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ps_2eproto_sccs[3] = {
  &scc_info_CredRequest_ps_2eproto.base,
  &scc_info_Credential_ps_2eproto.base,
  &scc_info_PubKey_ps_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ps_2eproto_once;
static bool descriptor_table_ps_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ps_2eproto = {
  &descriptor_table_ps_2eproto_initialized, descriptor_table_protodef_ps_2eproto, "ps.proto", 145,
  &descriptor_table_ps_2eproto_once, descriptor_table_ps_2eproto_sccs, descriptor_table_ps_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_ps_2eproto::offsets,
  file_level_metadata_ps_2eproto, 3, file_level_enum_descriptors_ps_2eproto, file_level_service_descriptors_ps_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ps_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ps_2eproto), true);

// ===================================================================

void PubKey::InitAsDefaultInstance() {
}
class PubKey::_Internal {
 public:
};

PubKey::PubKey()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PubKey)
}
PubKey::PubKey(const PubKey& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      yi_(from.yi_),
      yyi_(from.yyi_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  g_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_g().empty()) {
    g_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.g_);
  }
  gg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_gg().empty()) {
    gg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.gg_);
  }
  xx_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_xx().empty()) {
    xx_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.xx_);
  }
  // @@protoc_insertion_point(copy_constructor:PubKey)
}

void PubKey::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PubKey_ps_2eproto.base);
  g_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  gg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  xx_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

PubKey::~PubKey() {
  // @@protoc_insertion_point(destructor:PubKey)
  SharedDtor();
}

void PubKey::SharedDtor() {
  g_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  gg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  xx_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void PubKey::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PubKey& PubKey::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PubKey_ps_2eproto.base);
  return *internal_default_instance();
}


void PubKey::Clear() {
// @@protoc_insertion_point(message_clear_start:PubKey)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  yi_.Clear();
  yyi_.Clear();
  g_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  gg_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  xx_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* PubKey::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes g = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_g();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated bytes Yi = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_yi();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      // bytes gg = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_gg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes XX = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_xx();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated bytes YYi = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_yyi();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PubKey::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PubKey)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes g = 1;
  if (this->g().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_g(), target);
  }

  // repeated bytes Yi = 2;
  for (int i = 0, n = this->_internal_yi_size(); i < n; i++) {
    const auto& s = this->_internal_yi(i);
    target = stream->WriteBytes(2, s, target);
  }

  // bytes gg = 3;
  if (this->gg().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_gg(), target);
  }

  // bytes XX = 4;
  if (this->xx().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_xx(), target);
  }

  // repeated bytes YYi = 5;
  for (int i = 0, n = this->_internal_yyi_size(); i < n; i++) {
    const auto& s = this->_internal_yyi(i);
    target = stream->WriteBytes(5, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PubKey)
  return target;
}

size_t PubKey::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PubKey)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes Yi = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(yi_.size());
  for (int i = 0, n = yi_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      yi_.Get(i));
  }

  // repeated bytes YYi = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(yyi_.size());
  for (int i = 0, n = yyi_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      yyi_.Get(i));
  }

  // bytes g = 1;
  if (this->g().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_g());
  }

  // bytes gg = 3;
  if (this->gg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_gg());
  }

  // bytes XX = 4;
  if (this->xx().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_xx());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PubKey::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PubKey)
  GOOGLE_DCHECK_NE(&from, this);
  const PubKey* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PubKey>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PubKey)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PubKey)
    MergeFrom(*source);
  }
}

void PubKey::MergeFrom(const PubKey& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PubKey)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  yi_.MergeFrom(from.yi_);
  yyi_.MergeFrom(from.yyi_);
  if (from.g().size() > 0) {

    g_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.g_);
  }
  if (from.gg().size() > 0) {

    gg_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.gg_);
  }
  if (from.xx().size() > 0) {

    xx_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.xx_);
  }
}

void PubKey::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PubKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PubKey::CopyFrom(const PubKey& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PubKey)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PubKey::IsInitialized() const {
  return true;
}

void PubKey::InternalSwap(PubKey* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  yi_.InternalSwap(&other->yi_);
  yyi_.InternalSwap(&other->yyi_);
  g_.Swap(&other->g_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  gg_.Swap(&other->gg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  xx_.Swap(&other->xx_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata PubKey::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void Credential::InitAsDefaultInstance() {
}
class Credential::_Internal {
 public:
};

Credential::Credential()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Credential)
}
Credential::Credential(const Credential& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  sig1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sig1().empty()) {
    sig1_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.sig1_);
  }
  sig2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_sig2().empty()) {
    sig2_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.sig2_);
  }
  // @@protoc_insertion_point(copy_constructor:Credential)
}

void Credential::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Credential_ps_2eproto.base);
  sig1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sig2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

Credential::~Credential() {
  // @@protoc_insertion_point(destructor:Credential)
  SharedDtor();
}

void Credential::SharedDtor() {
  sig1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sig2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Credential::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Credential& Credential::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Credential_ps_2eproto.base);
  return *internal_default_instance();
}


void Credential::Clear() {
// @@protoc_insertion_point(message_clear_start:Credential)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sig1_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  sig2_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* Credential::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes sig1 = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_sig1();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes sig2 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_sig2();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Credential::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Credential)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes sig1 = 1;
  if (this->sig1().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_sig1(), target);
  }

  // bytes sig2 = 2;
  if (this->sig2().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_sig2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Credential)
  return target;
}

size_t Credential::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Credential)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes sig1 = 1;
  if (this->sig1().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sig1());
  }

  // bytes sig2 = 2;
  if (this->sig2().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_sig2());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Credential::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Credential)
  GOOGLE_DCHECK_NE(&from, this);
  const Credential* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Credential>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Credential)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Credential)
    MergeFrom(*source);
  }
}

void Credential::MergeFrom(const Credential& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Credential)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.sig1().size() > 0) {

    sig1_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.sig1_);
  }
  if (from.sig2().size() > 0) {

    sig2_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.sig2_);
  }
}

void Credential::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Credential)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Credential::CopyFrom(const Credential& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Credential)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Credential::IsInitialized() const {
  return true;
}

void Credential::InternalSwap(Credential* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  sig1_.Swap(&other->sig1_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  sig2_.Swap(&other->sig2_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata Credential::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void CredRequest::InitAsDefaultInstance() {
}
class CredRequest::_Internal {
 public:
};

CredRequest::CredRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:CredRequest)
}
CredRequest::CredRequest(const CredRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:CredRequest)
}

void CredRequest::SharedCtor() {
}

CredRequest::~CredRequest() {
  // @@protoc_insertion_point(destructor:CredRequest)
  SharedDtor();
}

void CredRequest::SharedDtor() {
}

void CredRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CredRequest& CredRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CredRequest_ps_2eproto.base);
  return *internal_default_instance();
}


void CredRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:CredRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

const char* CredRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CredRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:CredRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CredRequest)
  return target;
}

size_t CredRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CredRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CredRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CredRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const CredRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CredRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CredRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CredRequest)
    MergeFrom(*source);
  }
}

void CredRequest::MergeFrom(const CredRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CredRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void CredRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CredRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CredRequest::CopyFrom(const CredRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CredRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CredRequest::IsInitialized() const {
  return true;
}

void CredRequest::InternalSwap(CredRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CredRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PubKey* Arena::CreateMaybeMessage< ::PubKey >(Arena* arena) {
  return Arena::CreateInternal< ::PubKey >(arena);
}
template<> PROTOBUF_NOINLINE ::Credential* Arena::CreateMaybeMessage< ::Credential >(Arena* arena) {
  return Arena::CreateInternal< ::Credential >(arena);
}
template<> PROTOBUF_NOINLINE ::CredRequest* Arena::CreateMaybeMessage< ::CredRequest >(Arena* arena) {
  return Arena::CreateInternal< ::CredRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
