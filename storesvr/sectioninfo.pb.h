// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sectioninfo.proto

#ifndef PROTOBUF_sectioninfo_2eproto__INCLUDED
#define PROTOBUF_sectioninfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/wrappers.pb.h>
// @@protoc_insertion_point(includes)

namespace storesvr {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_sectioninfo_2eproto();
void protobuf_AssignDesc_sectioninfo_2eproto();
void protobuf_ShutdownFile_sectioninfo_2eproto();

class SectionInfo;
class SectionList;

// ===================================================================

class SectionInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:storesvr.SectionInfo) */ {
 public:
  SectionInfo();
  virtual ~SectionInfo();

  SectionInfo(const SectionInfo& from);

  inline SectionInfo& operator=(const SectionInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SectionInfo& default_instance();

  void Swap(SectionInfo* other);

  // implements Message ----------------------------------------------

  inline SectionInfo* New() const { return New(NULL); }

  SectionInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SectionInfo& from);
  void MergeFrom(const SectionInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SectionInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 sect_id = 1;
  void clear_sect_id();
  static const int kSectIdFieldNumber = 1;
  ::google::protobuf::uint32 sect_id() const;
  void set_sect_id(::google::protobuf::uint32 value);

  // optional uint64 max_seq = 2;
  void clear_max_seq();
  static const int kMaxSeqFieldNumber = 2;
  ::google::protobuf::uint64 max_seq() const;
  void set_max_seq(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:storesvr.SectionInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 max_seq_;
  ::google::protobuf::uint32 sect_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_sectioninfo_2eproto();
  friend void protobuf_AssignDesc_sectioninfo_2eproto();
  friend void protobuf_ShutdownFile_sectioninfo_2eproto();

  void InitAsDefaultInstance();
  static SectionInfo* default_instance_;
};
// -------------------------------------------------------------------

class SectionList : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:storesvr.SectionList) */ {
 public:
  SectionList();
  virtual ~SectionList();

  SectionList(const SectionList& from);

  inline SectionList& operator=(const SectionList& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SectionList& default_instance();

  void Swap(SectionList* other);

  // implements Message ----------------------------------------------

  inline SectionList* New() const { return New(NULL); }

  SectionList* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SectionList& from);
  void MergeFrom(const SectionList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SectionList* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .storesvr.SectionInfo sections = 1;
  int sections_size() const;
  void clear_sections();
  static const int kSectionsFieldNumber = 1;
  const ::storesvr::SectionInfo& sections(int index) const;
  ::storesvr::SectionInfo* mutable_sections(int index);
  ::storesvr::SectionInfo* add_sections();
  ::google::protobuf::RepeatedPtrField< ::storesvr::SectionInfo >*
      mutable_sections();
  const ::google::protobuf::RepeatedPtrField< ::storesvr::SectionInfo >&
      sections() const;

  // @@protoc_insertion_point(class_scope:storesvr.SectionList)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::storesvr::SectionInfo > sections_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_sectioninfo_2eproto();
  friend void protobuf_AssignDesc_sectioninfo_2eproto();
  friend void protobuf_ShutdownFile_sectioninfo_2eproto();

  void InitAsDefaultInstance();
  static SectionList* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SectionInfo

// optional uint32 sect_id = 1;
inline void SectionInfo::clear_sect_id() {
  sect_id_ = 0u;
}
inline ::google::protobuf::uint32 SectionInfo::sect_id() const {
  // @@protoc_insertion_point(field_get:storesvr.SectionInfo.sect_id)
  return sect_id_;
}
inline void SectionInfo::set_sect_id(::google::protobuf::uint32 value) {
  
  sect_id_ = value;
  // @@protoc_insertion_point(field_set:storesvr.SectionInfo.sect_id)
}

// optional uint64 max_seq = 2;
inline void SectionInfo::clear_max_seq() {
  max_seq_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SectionInfo::max_seq() const {
  // @@protoc_insertion_point(field_get:storesvr.SectionInfo.max_seq)
  return max_seq_;
}
inline void SectionInfo::set_max_seq(::google::protobuf::uint64 value) {
  
  max_seq_ = value;
  // @@protoc_insertion_point(field_set:storesvr.SectionInfo.max_seq)
}

// -------------------------------------------------------------------

// SectionList

// repeated .storesvr.SectionInfo sections = 1;
inline int SectionList::sections_size() const {
  return sections_.size();
}
inline void SectionList::clear_sections() {
  sections_.Clear();
}
inline const ::storesvr::SectionInfo& SectionList::sections(int index) const {
  // @@protoc_insertion_point(field_get:storesvr.SectionList.sections)
  return sections_.Get(index);
}
inline ::storesvr::SectionInfo* SectionList::mutable_sections(int index) {
  // @@protoc_insertion_point(field_mutable:storesvr.SectionList.sections)
  return sections_.Mutable(index);
}
inline ::storesvr::SectionInfo* SectionList::add_sections() {
  // @@protoc_insertion_point(field_add:storesvr.SectionList.sections)
  return sections_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::storesvr::SectionInfo >*
SectionList::mutable_sections() {
  // @@protoc_insertion_point(field_mutable_list:storesvr.SectionList.sections)
  return &sections_;
}
inline const ::google::protobuf::RepeatedPtrField< ::storesvr::SectionInfo >&
SectionList::sections() const {
  // @@protoc_insertion_point(field_list:storesvr.SectionList.sections)
  return sections_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace storesvr

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_sectioninfo_2eproto__INCLUDED
