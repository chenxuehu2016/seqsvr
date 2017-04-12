// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: allocsvr.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "allocsvr.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace allocsvr {

namespace {

const ::google::protobuf::Descriptor* SeqReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SeqReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* SeqResp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SeqResp_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_allocsvr_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_allocsvr_2eproto() {
  protobuf_AddDesc_allocsvr_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "allocsvr.proto");
  GOOGLE_CHECK(file != NULL);
  SeqReq_descriptor_ = file->message_type(0);
  static const int SeqReq_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqReq, uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqReq, router_ver_),
  };
  SeqReq_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SeqReq_descriptor_,
      SeqReq::default_instance_,
      SeqReq_offsets_,
      -1,
      -1,
      -1,
      sizeof(SeqReq),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqReq, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqReq, _is_default_instance_));
  SeqResp_descriptor_ = file->message_type(1);
  static const int SeqResp_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqResp, seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqResp, routers_),
  };
  SeqResp_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SeqResp_descriptor_,
      SeqResp::default_instance_,
      SeqResp_offsets_,
      -1,
      -1,
      -1,
      sizeof(SeqResp),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqResp, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SeqResp, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_allocsvr_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SeqReq_descriptor_, &SeqReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SeqResp_descriptor_, &SeqResp::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_allocsvr_2eproto() {
  delete SeqReq::default_instance_;
  delete SeqReq_reflection_;
  delete SeqResp::default_instance_;
  delete SeqResp_reflection_;
}

void protobuf_AddDesc_allocsvr_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_allocsvr_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fwrappers_2eproto();
  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fempty_2eproto();
  ::phxrpc::protobuf_AddDesc_phxrpc_2frpc_2fphxrpc_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016allocsvr.proto\022\010allocsvr\032\036google/proto"
    "buf/wrappers.proto\032\033google/protobuf/empt"
    "y.proto\032\027phxrpc/rpc/phxrpc.proto\")\n\006SeqR"
    "eq\022\013\n\003uid\030\001 \001(\r\022\022\n\nrouter_ver\030\002 \001(\r\"\'\n\007S"
    "eqResp\022\013\n\003seq\030\001 \001(\004\022\017\n\007routers\030\002 \001(\0142g\n\010"
    "allocsvr\022[\n\006GetSeq\022\020.allocsvr.SeqReq\032\021.a"
    "llocsvr.SeqResp\",\200\310\320\007\001\212\310\320\007\004u:r:\222\310\320\007\031-u <"
    "user> -r <has_router>b\006proto3", 309);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "allocsvr.proto", &protobuf_RegisterTypes);
  SeqReq::default_instance_ = new SeqReq();
  SeqResp::default_instance_ = new SeqResp();
  SeqReq::default_instance_->InitAsDefaultInstance();
  SeqResp::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_allocsvr_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_allocsvr_2eproto {
  StaticDescriptorInitializer_allocsvr_2eproto() {
    protobuf_AddDesc_allocsvr_2eproto();
  }
} static_descriptor_initializer_allocsvr_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SeqReq::kUidFieldNumber;
const int SeqReq::kRouterVerFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SeqReq::SeqReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:allocsvr.SeqReq)
}

void SeqReq::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SeqReq::SeqReq(const SeqReq& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:allocsvr.SeqReq)
}

void SeqReq::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  uid_ = 0u;
  router_ver_ = 0u;
}

SeqReq::~SeqReq() {
  // @@protoc_insertion_point(destructor:allocsvr.SeqReq)
  SharedDtor();
}

void SeqReq::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SeqReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SeqReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SeqReq_descriptor_;
}

const SeqReq& SeqReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_allocsvr_2eproto();
  return *default_instance_;
}

SeqReq* SeqReq::default_instance_ = NULL;

SeqReq* SeqReq::New(::google::protobuf::Arena* arena) const {
  SeqReq* n = new SeqReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SeqReq::Clear() {
// @@protoc_insertion_point(message_clear_start:allocsvr.SeqReq)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(SeqReq, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SeqReq*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(uid_, router_ver_);

#undef ZR_HELPER_
#undef ZR_

}

bool SeqReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:allocsvr.SeqReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 uid = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &uid_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_router_ver;
        break;
      }

      // optional uint32 router_ver = 2;
      case 2: {
        if (tag == 16) {
         parse_router_ver:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &router_ver_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:allocsvr.SeqReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:allocsvr.SeqReq)
  return false;
#undef DO_
}

void SeqReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:allocsvr.SeqReq)
  // optional uint32 uid = 1;
  if (this->uid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->uid(), output);
  }

  // optional uint32 router_ver = 2;
  if (this->router_ver() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->router_ver(), output);
  }

  // @@protoc_insertion_point(serialize_end:allocsvr.SeqReq)
}

::google::protobuf::uint8* SeqReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:allocsvr.SeqReq)
  // optional uint32 uid = 1;
  if (this->uid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->uid(), target);
  }

  // optional uint32 router_ver = 2;
  if (this->router_ver() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->router_ver(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:allocsvr.SeqReq)
  return target;
}

int SeqReq::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:allocsvr.SeqReq)
  int total_size = 0;

  // optional uint32 uid = 1;
  if (this->uid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->uid());
  }

  // optional uint32 router_ver = 2;
  if (this->router_ver() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->router_ver());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SeqReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:allocsvr.SeqReq)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SeqReq* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SeqReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:allocsvr.SeqReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:allocsvr.SeqReq)
    MergeFrom(*source);
  }
}

void SeqReq::MergeFrom(const SeqReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:allocsvr.SeqReq)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.uid() != 0) {
    set_uid(from.uid());
  }
  if (from.router_ver() != 0) {
    set_router_ver(from.router_ver());
  }
}

void SeqReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:allocsvr.SeqReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SeqReq::CopyFrom(const SeqReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:allocsvr.SeqReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SeqReq::IsInitialized() const {

  return true;
}

void SeqReq::Swap(SeqReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SeqReq::InternalSwap(SeqReq* other) {
  std::swap(uid_, other->uid_);
  std::swap(router_ver_, other->router_ver_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SeqReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SeqReq_descriptor_;
  metadata.reflection = SeqReq_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SeqReq

// optional uint32 uid = 1;
void SeqReq::clear_uid() {
  uid_ = 0u;
}
 ::google::protobuf::uint32 SeqReq::uid() const {
  // @@protoc_insertion_point(field_get:allocsvr.SeqReq.uid)
  return uid_;
}
 void SeqReq::set_uid(::google::protobuf::uint32 value) {
  
  uid_ = value;
  // @@protoc_insertion_point(field_set:allocsvr.SeqReq.uid)
}

// optional uint32 router_ver = 2;
void SeqReq::clear_router_ver() {
  router_ver_ = 0u;
}
 ::google::protobuf::uint32 SeqReq::router_ver() const {
  // @@protoc_insertion_point(field_get:allocsvr.SeqReq.router_ver)
  return router_ver_;
}
 void SeqReq::set_router_ver(::google::protobuf::uint32 value) {
  
  router_ver_ = value;
  // @@protoc_insertion_point(field_set:allocsvr.SeqReq.router_ver)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SeqResp::kSeqFieldNumber;
const int SeqResp::kRoutersFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SeqResp::SeqResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:allocsvr.SeqResp)
}

void SeqResp::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SeqResp::SeqResp(const SeqResp& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:allocsvr.SeqResp)
}

void SeqResp::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  seq_ = GOOGLE_ULONGLONG(0);
  routers_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

SeqResp::~SeqResp() {
  // @@protoc_insertion_point(destructor:allocsvr.SeqResp)
  SharedDtor();
}

void SeqResp::SharedDtor() {
  routers_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void SeqResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SeqResp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SeqResp_descriptor_;
}

const SeqResp& SeqResp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_allocsvr_2eproto();
  return *default_instance_;
}

SeqResp* SeqResp::default_instance_ = NULL;

SeqResp* SeqResp::New(::google::protobuf::Arena* arena) const {
  SeqResp* n = new SeqResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SeqResp::Clear() {
// @@protoc_insertion_point(message_clear_start:allocsvr.SeqResp)
  seq_ = GOOGLE_ULONGLONG(0);
  routers_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool SeqResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:allocsvr.SeqResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 seq = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &seq_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_routers;
        break;
      }

      // optional bytes routers = 2;
      case 2: {
        if (tag == 18) {
         parse_routers:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_routers()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:allocsvr.SeqResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:allocsvr.SeqResp)
  return false;
#undef DO_
}

void SeqResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:allocsvr.SeqResp)
  // optional uint64 seq = 1;
  if (this->seq() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->seq(), output);
  }

  // optional bytes routers = 2;
  if (this->routers().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->routers(), output);
  }

  // @@protoc_insertion_point(serialize_end:allocsvr.SeqResp)
}

::google::protobuf::uint8* SeqResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:allocsvr.SeqResp)
  // optional uint64 seq = 1;
  if (this->seq() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->seq(), target);
  }

  // optional bytes routers = 2;
  if (this->routers().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->routers(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:allocsvr.SeqResp)
  return target;
}

int SeqResp::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:allocsvr.SeqResp)
  int total_size = 0;

  // optional uint64 seq = 1;
  if (this->seq() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->seq());
  }

  // optional bytes routers = 2;
  if (this->routers().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->routers());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SeqResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:allocsvr.SeqResp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SeqResp* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SeqResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:allocsvr.SeqResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:allocsvr.SeqResp)
    MergeFrom(*source);
  }
}

void SeqResp::MergeFrom(const SeqResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:allocsvr.SeqResp)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.seq() != 0) {
    set_seq(from.seq());
  }
  if (from.routers().size() > 0) {

    routers_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.routers_);
  }
}

void SeqResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:allocsvr.SeqResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SeqResp::CopyFrom(const SeqResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:allocsvr.SeqResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SeqResp::IsInitialized() const {

  return true;
}

void SeqResp::Swap(SeqResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SeqResp::InternalSwap(SeqResp* other) {
  std::swap(seq_, other->seq_);
  routers_.Swap(&other->routers_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SeqResp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SeqResp_descriptor_;
  metadata.reflection = SeqResp_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SeqResp

// optional uint64 seq = 1;
void SeqResp::clear_seq() {
  seq_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 SeqResp::seq() const {
  // @@protoc_insertion_point(field_get:allocsvr.SeqResp.seq)
  return seq_;
}
 void SeqResp::set_seq(::google::protobuf::uint64 value) {
  
  seq_ = value;
  // @@protoc_insertion_point(field_set:allocsvr.SeqResp.seq)
}

// optional bytes routers = 2;
void SeqResp::clear_routers() {
  routers_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& SeqResp::routers() const {
  // @@protoc_insertion_point(field_get:allocsvr.SeqResp.routers)
  return routers_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SeqResp::set_routers(const ::std::string& value) {
  
  routers_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:allocsvr.SeqResp.routers)
}
 void SeqResp::set_routers(const char* value) {
  
  routers_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:allocsvr.SeqResp.routers)
}
 void SeqResp::set_routers(const void* value, size_t size) {
  
  routers_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:allocsvr.SeqResp.routers)
}
 ::std::string* SeqResp::mutable_routers() {
  
  // @@protoc_insertion_point(field_mutable:allocsvr.SeqResp.routers)
  return routers_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SeqResp::release_routers() {
  // @@protoc_insertion_point(field_release:allocsvr.SeqResp.routers)
  
  return routers_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SeqResp::set_allocated_routers(::std::string* routers) {
  if (routers != NULL) {
    
  } else {
    
  }
  routers_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), routers);
  // @@protoc_insertion_point(field_set_allocated:allocsvr.SeqResp.routers)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace allocsvr

// @@protoc_insertion_point(global_scope)
