// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GeneralRPC.proto

#include "GeneralRPC.pb.h"

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

PROTOBUF_PRAGMA_INIT_SEG
namespace exec {
namespace rpc {
constexpr Ack::Ack(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : ok_(false){}
struct AckDefaultTypeInternal {
  constexpr AckDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~AckDefaultTypeInternal() {}
  union {
    Ack _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT AckDefaultTypeInternal _Ack_default_instance_;
constexpr RpcHeader::RpcHeader(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : mode_(0)

  , coordination_id_(0)
  , rpc_type_(0){}
struct RpcHeaderDefaultTypeInternal {
  constexpr RpcHeaderDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~RpcHeaderDefaultTypeInternal() {}
  union {
    RpcHeader _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT RpcHeaderDefaultTypeInternal _RpcHeader_default_instance_;
constexpr CompleteRpcMessage::CompleteRpcMessage(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : protobuf_body_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , raw_body_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , header_(nullptr){}
struct CompleteRpcMessageDefaultTypeInternal {
  constexpr CompleteRpcMessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CompleteRpcMessageDefaultTypeInternal() {}
  union {
    CompleteRpcMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CompleteRpcMessageDefaultTypeInternal _CompleteRpcMessage_default_instance_;
}  // namespace rpc
}  // namespace exec
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_GeneralRPC_2eproto[3];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_GeneralRPC_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_GeneralRPC_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_GeneralRPC_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::exec::rpc::Ack, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::exec::rpc::Ack, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::exec::rpc::Ack, ok_),
  0,
  PROTOBUF_FIELD_OFFSET(::exec::rpc::RpcHeader, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::exec::rpc::RpcHeader, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::exec::rpc::RpcHeader, mode_),
  PROTOBUF_FIELD_OFFSET(::exec::rpc::RpcHeader, coordination_id_),
  PROTOBUF_FIELD_OFFSET(::exec::rpc::RpcHeader, rpc_type_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::exec::rpc::CompleteRpcMessage, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::exec::rpc::CompleteRpcMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::exec::rpc::CompleteRpcMessage, header_),
  PROTOBUF_FIELD_OFFSET(::exec::rpc::CompleteRpcMessage, protobuf_body_),
  PROTOBUF_FIELD_OFFSET(::exec::rpc::CompleteRpcMessage, raw_body_),
  2,
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(::exec::rpc::Ack)},
  { 7, 15, sizeof(::exec::rpc::RpcHeader)},
  { 18, 26, sizeof(::exec::rpc::CompleteRpcMessage)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::exec::rpc::_Ack_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::exec::rpc::_RpcHeader_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::exec::rpc::_CompleteRpcMessage_default_instance_),
};

const char descriptor_table_protodef_GeneralRPC_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020GeneralRPC.proto\022\010exec.rpc\032\022Coordinati"
  "on.proto\"\021\n\003Ack\022\n\n\002ok\030\001 \001(\010\"W\n\tRpcHeader"
  "\022\037\n\004mode\030\001 \001(\0162\021.exec.rpc.RpcMode\022\027\n\017coo"
  "rdination_id\030\002 \001(\005\022\020\n\010rpc_type\030\003 \001(\005\"b\n\022"
  "CompleteRpcMessage\022#\n\006header\030\001 \001(\0132\023.exe"
  "c.rpc.RpcHeader\022\025\n\rprotobuf_body\030\002 \001(\014\022\020"
  "\n\010raw_body\030\003 \001(\014*N\n\007RpcMode\022\013\n\007REQUEST\020\000"
  "\022\014\n\010RESPONSE\020\001\022\024\n\020RESPONSE_FAILURE\020\002\022\010\n\004"
  "PING\020\003\022\010\n\004PONG\020\004B1\n\033org.apache.drill.exe"
  "c.protoB\020GeneralRPCProtosH\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_GeneralRPC_2eproto_deps[1] = {
  &::descriptor_table_Coordination_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_GeneralRPC_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GeneralRPC_2eproto = {
  false, false, 387, descriptor_table_protodef_GeneralRPC_2eproto, "GeneralRPC.proto", 
  &descriptor_table_GeneralRPC_2eproto_once, descriptor_table_GeneralRPC_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_GeneralRPC_2eproto::offsets,
  file_level_metadata_GeneralRPC_2eproto, file_level_enum_descriptors_GeneralRPC_2eproto, file_level_service_descriptors_GeneralRPC_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_GeneralRPC_2eproto_getter() {
  return &descriptor_table_GeneralRPC_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_GeneralRPC_2eproto(&descriptor_table_GeneralRPC_2eproto);
namespace exec {
namespace rpc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RpcMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_GeneralRPC_2eproto);
  return file_level_enum_descriptors_GeneralRPC_2eproto[0];
}
bool RpcMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class Ack::_Internal {
 public:
  using HasBits = decltype(std::declval<Ack>()._has_bits_);
  static void set_has_ok(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Ack::Ack(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:exec.rpc.Ack)
}
Ack::Ack(const Ack& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ok_ = from.ok_;
  // @@protoc_insertion_point(copy_constructor:exec.rpc.Ack)
}

void Ack::SharedCtor() {
ok_ = false;
}

Ack::~Ack() {
  // @@protoc_insertion_point(destructor:exec.rpc.Ack)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Ack::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Ack::ArenaDtor(void* object) {
  Ack* _this = reinterpret_cast< Ack* >(object);
  (void)_this;
}
void Ack::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Ack::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Ack::Clear() {
// @@protoc_insertion_point(message_clear_start:exec.rpc.Ack)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ok_ = false;
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Ack::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bool ok = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_ok(&has_bits);
          ok_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Ack::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:exec.rpc.Ack)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool ok = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_ok(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:exec.rpc.Ack)
  return target;
}

size_t Ack::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:exec.rpc.Ack)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bool ok = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Ack::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:exec.rpc.Ack)
  GOOGLE_DCHECK_NE(&from, this);
  const Ack* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Ack>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:exec.rpc.Ack)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:exec.rpc.Ack)
    MergeFrom(*source);
  }
}

void Ack::MergeFrom(const Ack& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:exec.rpc.Ack)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_ok()) {
    _internal_set_ok(from._internal_ok());
  }
}

void Ack::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:exec.rpc.Ack)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Ack::CopyFrom(const Ack& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:exec.rpc.Ack)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Ack::IsInitialized() const {
  return true;
}

void Ack::InternalSwap(Ack* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(ok_, other->ok_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Ack::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_GeneralRPC_2eproto_getter, &descriptor_table_GeneralRPC_2eproto_once,
      file_level_metadata_GeneralRPC_2eproto[0]);
}

// ===================================================================

class RpcHeader::_Internal {
 public:
  using HasBits = decltype(std::declval<RpcHeader>()._has_bits_);
  static void set_has_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_coordination_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_rpc_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

RpcHeader::RpcHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:exec.rpc.RpcHeader)
}
RpcHeader::RpcHeader(const RpcHeader& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&mode_, &from.mode_,
    static_cast<size_t>(reinterpret_cast<char*>(&rpc_type_) -
    reinterpret_cast<char*>(&mode_)) + sizeof(rpc_type_));
  // @@protoc_insertion_point(copy_constructor:exec.rpc.RpcHeader)
}

void RpcHeader::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&mode_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&rpc_type_) -
    reinterpret_cast<char*>(&mode_)) + sizeof(rpc_type_));
}

RpcHeader::~RpcHeader() {
  // @@protoc_insertion_point(destructor:exec.rpc.RpcHeader)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void RpcHeader::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void RpcHeader::ArenaDtor(void* object) {
  RpcHeader* _this = reinterpret_cast< RpcHeader* >(object);
  (void)_this;
}
void RpcHeader::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void RpcHeader::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void RpcHeader::Clear() {
// @@protoc_insertion_point(message_clear_start:exec.rpc.RpcHeader)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&mode_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&rpc_type_) -
        reinterpret_cast<char*>(&mode_)) + sizeof(rpc_type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RpcHeader::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .exec.rpc.RpcMode mode = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::exec::rpc::RpcMode_IsValid(val))) {
            _internal_set_mode(static_cast<::exec::rpc::RpcMode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional int32 coordination_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_coordination_id(&has_bits);
          coordination_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 rpc_type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_rpc_type(&has_bits);
          rpc_type_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RpcHeader::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:exec.rpc.RpcHeader)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .exec.rpc.RpcMode mode = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_mode(), target);
  }

  // optional int32 coordination_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_coordination_id(), target);
  }

  // optional int32 rpc_type = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_rpc_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:exec.rpc.RpcHeader)
  return target;
}

size_t RpcHeader::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:exec.rpc.RpcHeader)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional .exec.rpc.RpcMode mode = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_mode());
    }

    // optional int32 coordination_id = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_coordination_id());
    }

    // optional int32 rpc_type = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
          this->_internal_rpc_type());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RpcHeader::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:exec.rpc.RpcHeader)
  GOOGLE_DCHECK_NE(&from, this);
  const RpcHeader* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RpcHeader>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:exec.rpc.RpcHeader)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:exec.rpc.RpcHeader)
    MergeFrom(*source);
  }
}

void RpcHeader::MergeFrom(const RpcHeader& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:exec.rpc.RpcHeader)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      mode_ = from.mode_;
    }
    if (cached_has_bits & 0x00000002u) {
      coordination_id_ = from.coordination_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      rpc_type_ = from.rpc_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void RpcHeader::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:exec.rpc.RpcHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcHeader::CopyFrom(const RpcHeader& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:exec.rpc.RpcHeader)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcHeader::IsInitialized() const {
  return true;
}

void RpcHeader::InternalSwap(RpcHeader* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RpcHeader, rpc_type_)
      + sizeof(RpcHeader::rpc_type_)
      - PROTOBUF_FIELD_OFFSET(RpcHeader, mode_)>(
          reinterpret_cast<char*>(&mode_),
          reinterpret_cast<char*>(&other->mode_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RpcHeader::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_GeneralRPC_2eproto_getter, &descriptor_table_GeneralRPC_2eproto_once,
      file_level_metadata_GeneralRPC_2eproto[1]);
}

// ===================================================================

class CompleteRpcMessage::_Internal {
 public:
  using HasBits = decltype(std::declval<CompleteRpcMessage>()._has_bits_);
  static const ::exec::rpc::RpcHeader& header(const CompleteRpcMessage* msg);
  static void set_has_header(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_protobuf_body(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_raw_body(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::exec::rpc::RpcHeader&
CompleteRpcMessage::_Internal::header(const CompleteRpcMessage* msg) {
  return *msg->header_;
}
CompleteRpcMessage::CompleteRpcMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:exec.rpc.CompleteRpcMessage)
}
CompleteRpcMessage::CompleteRpcMessage(const CompleteRpcMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  protobuf_body_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_protobuf_body()) {
    protobuf_body_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_protobuf_body(), 
      GetArena());
  }
  raw_body_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_raw_body()) {
    raw_body_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_raw_body(), 
      GetArena());
  }
  if (from._internal_has_header()) {
    header_ = new ::exec::rpc::RpcHeader(*from.header_);
  } else {
    header_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:exec.rpc.CompleteRpcMessage)
}

void CompleteRpcMessage::SharedCtor() {
protobuf_body_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
raw_body_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
header_ = nullptr;
}

CompleteRpcMessage::~CompleteRpcMessage() {
  // @@protoc_insertion_point(destructor:exec.rpc.CompleteRpcMessage)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CompleteRpcMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  protobuf_body_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  raw_body_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void CompleteRpcMessage::ArenaDtor(void* object) {
  CompleteRpcMessage* _this = reinterpret_cast< CompleteRpcMessage* >(object);
  (void)_this;
}
void CompleteRpcMessage::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CompleteRpcMessage::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void CompleteRpcMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:exec.rpc.CompleteRpcMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      protobuf_body_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      raw_body_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(header_ != nullptr);
      header_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CompleteRpcMessage::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .exec.rpc.RpcHeader header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bytes protobuf_body = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_protobuf_body();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bytes raw_body = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_raw_body();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* CompleteRpcMessage::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:exec.rpc.CompleteRpcMessage)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .exec.rpc.RpcHeader header = 1;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::header(this), target, stream);
  }

  // optional bytes protobuf_body = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_protobuf_body(), target);
  }

  // optional bytes raw_body = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_raw_body(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:exec.rpc.CompleteRpcMessage)
  return target;
}

size_t CompleteRpcMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:exec.rpc.CompleteRpcMessage)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional bytes protobuf_body = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_protobuf_body());
    }

    // optional bytes raw_body = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_raw_body());
    }

    // optional .exec.rpc.RpcHeader header = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *header_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CompleteRpcMessage::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:exec.rpc.CompleteRpcMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const CompleteRpcMessage* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CompleteRpcMessage>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:exec.rpc.CompleteRpcMessage)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:exec.rpc.CompleteRpcMessage)
    MergeFrom(*source);
  }
}

void CompleteRpcMessage::MergeFrom(const CompleteRpcMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:exec.rpc.CompleteRpcMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_protobuf_body(from._internal_protobuf_body());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_raw_body(from._internal_raw_body());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_header()->::exec::rpc::RpcHeader::MergeFrom(from._internal_header());
    }
  }
}

void CompleteRpcMessage::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:exec.rpc.CompleteRpcMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CompleteRpcMessage::CopyFrom(const CompleteRpcMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:exec.rpc.CompleteRpcMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CompleteRpcMessage::IsInitialized() const {
  return true;
}

void CompleteRpcMessage::InternalSwap(CompleteRpcMessage* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  protobuf_body_.Swap(&other->protobuf_body_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  raw_body_.Swap(&other->raw_body_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(header_, other->header_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CompleteRpcMessage::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_GeneralRPC_2eproto_getter, &descriptor_table_GeneralRPC_2eproto_once,
      file_level_metadata_GeneralRPC_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc
}  // namespace exec
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::exec::rpc::Ack* Arena::CreateMaybeMessage< ::exec::rpc::Ack >(Arena* arena) {
  return Arena::CreateMessageInternal< ::exec::rpc::Ack >(arena);
}
template<> PROTOBUF_NOINLINE ::exec::rpc::RpcHeader* Arena::CreateMaybeMessage< ::exec::rpc::RpcHeader >(Arena* arena) {
  return Arena::CreateMessageInternal< ::exec::rpc::RpcHeader >(arena);
}
template<> PROTOBUF_NOINLINE ::exec::rpc::CompleteRpcMessage* Arena::CreateMaybeMessage< ::exec::rpc::CompleteRpcMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::exec::rpc::CompleteRpcMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
