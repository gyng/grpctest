// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: src/protos/event.proto

#ifndef PROTOBUF_INCLUDED_src_2fprotos_2fevent_2eproto
#define PROTOBUF_INCLUDED_src_2fprotos_2fevent_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/struct.pb.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_src_2fprotos_2fevent_2eproto 

namespace protobuf_src_2fprotos_2fevent_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_src_2fprotos_2fevent_2eproto
namespace event {
class EventResponse;
class EventResponseDefaultTypeInternal;
extern EventResponseDefaultTypeInternal _EventResponse_default_instance_;
class GetEventsSinceRequest;
class GetEventsSinceRequestDefaultTypeInternal;
extern GetEventsSinceRequestDefaultTypeInternal _GetEventsSinceRequest_default_instance_;
class GetEventsSinceResponse;
class GetEventsSinceResponseDefaultTypeInternal;
extern GetEventsSinceResponseDefaultTypeInternal _GetEventsSinceResponse_default_instance_;
class PutEventRequest;
class PutEventRequestDefaultTypeInternal;
extern PutEventRequestDefaultTypeInternal _PutEventRequest_default_instance_;
}  // namespace event
namespace google {
namespace protobuf {
template<> ::event::EventResponse* Arena::CreateMaybeMessage<::event::EventResponse>(Arena*);
template<> ::event::GetEventsSinceRequest* Arena::CreateMaybeMessage<::event::GetEventsSinceRequest>(Arena*);
template<> ::event::GetEventsSinceResponse* Arena::CreateMaybeMessage<::event::GetEventsSinceResponse>(Arena*);
template<> ::event::PutEventRequest* Arena::CreateMaybeMessage<::event::PutEventRequest>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace event {

// ===================================================================

class PutEventRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:event.PutEventRequest) */ {
 public:
  PutEventRequest();
  virtual ~PutEventRequest();

  PutEventRequest(const PutEventRequest& from);

  inline PutEventRequest& operator=(const PutEventRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PutEventRequest(PutEventRequest&& from) noexcept
    : PutEventRequest() {
    *this = ::std::move(from);
  }

  inline PutEventRequest& operator=(PutEventRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PutEventRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PutEventRequest* internal_default_instance() {
    return reinterpret_cast<const PutEventRequest*>(
               &_PutEventRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PutEventRequest* other);
  friend void swap(PutEventRequest& a, PutEventRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PutEventRequest* New() const final {
    return CreateMaybeMessage<PutEventRequest>(NULL);
  }

  PutEventRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PutEventRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PutEventRequest& from);
  void MergeFrom(const PutEventRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PutEventRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // .google.protobuf.Struct payload = 2;
  bool has_payload() const;
  void clear_payload();
  static const int kPayloadFieldNumber = 2;
  private:
  const ::google::protobuf::Struct& _internal_payload() const;
  public:
  const ::google::protobuf::Struct& payload() const;
  ::google::protobuf::Struct* release_payload();
  ::google::protobuf::Struct* mutable_payload();
  void set_allocated_payload(::google::protobuf::Struct* payload);

  // @@protoc_insertion_point(class_scope:event.PutEventRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::Struct* payload_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_src_2fprotos_2fevent_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class EventResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:event.EventResponse) */ {
 public:
  EventResponse();
  virtual ~EventResponse();

  EventResponse(const EventResponse& from);

  inline EventResponse& operator=(const EventResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  EventResponse(EventResponse&& from) noexcept
    : EventResponse() {
    *this = ::std::move(from);
  }

  inline EventResponse& operator=(EventResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const EventResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const EventResponse* internal_default_instance() {
    return reinterpret_cast<const EventResponse*>(
               &_EventResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(EventResponse* other);
  friend void swap(EventResponse& a, EventResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline EventResponse* New() const final {
    return CreateMaybeMessage<EventResponse>(NULL);
  }

  EventResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<EventResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const EventResponse& from);
  void MergeFrom(const EventResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(EventResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:event.EventResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_src_2fprotos_2fevent_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetEventsSinceRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:event.GetEventsSinceRequest) */ {
 public:
  GetEventsSinceRequest();
  virtual ~GetEventsSinceRequest();

  GetEventsSinceRequest(const GetEventsSinceRequest& from);

  inline GetEventsSinceRequest& operator=(const GetEventsSinceRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetEventsSinceRequest(GetEventsSinceRequest&& from) noexcept
    : GetEventsSinceRequest() {
    *this = ::std::move(from);
  }

  inline GetEventsSinceRequest& operator=(GetEventsSinceRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetEventsSinceRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetEventsSinceRequest* internal_default_instance() {
    return reinterpret_cast<const GetEventsSinceRequest*>(
               &_GetEventsSinceRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(GetEventsSinceRequest* other);
  friend void swap(GetEventsSinceRequest& a, GetEventsSinceRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetEventsSinceRequest* New() const final {
    return CreateMaybeMessage<GetEventsSinceRequest>(NULL);
  }

  GetEventsSinceRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetEventsSinceRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetEventsSinceRequest& from);
  void MergeFrom(const GetEventsSinceRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetEventsSinceRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // int32 id = 2;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:event.GetEventsSinceRequest)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  ::google::protobuf::int32 id_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_src_2fprotos_2fevent_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetEventsSinceResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:event.GetEventsSinceResponse) */ {
 public:
  GetEventsSinceResponse();
  virtual ~GetEventsSinceResponse();

  GetEventsSinceResponse(const GetEventsSinceResponse& from);

  inline GetEventsSinceResponse& operator=(const GetEventsSinceResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetEventsSinceResponse(GetEventsSinceResponse&& from) noexcept
    : GetEventsSinceResponse() {
    *this = ::std::move(from);
  }

  inline GetEventsSinceResponse& operator=(GetEventsSinceResponse&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const GetEventsSinceResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetEventsSinceResponse* internal_default_instance() {
    return reinterpret_cast<const GetEventsSinceResponse*>(
               &_GetEventsSinceResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(GetEventsSinceResponse* other);
  friend void swap(GetEventsSinceResponse& a, GetEventsSinceResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetEventsSinceResponse* New() const final {
    return CreateMaybeMessage<GetEventsSinceResponse>(NULL);
  }

  GetEventsSinceResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetEventsSinceResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetEventsSinceResponse& from);
  void MergeFrom(const GetEventsSinceResponse& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetEventsSinceResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .google.protobuf.Struct events = 2;
  int events_size() const;
  void clear_events();
  static const int kEventsFieldNumber = 2;
  ::google::protobuf::Struct* mutable_events(int index);
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Struct >*
      mutable_events();
  const ::google::protobuf::Struct& events(int index) const;
  ::google::protobuf::Struct* add_events();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Struct >&
      events() const;

  // string type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  const ::std::string& type() const;
  void set_type(const ::std::string& value);
  #if LANG_CXX11
  void set_type(::std::string&& value);
  #endif
  void set_type(const char* value);
  void set_type(const char* value, size_t size);
  ::std::string* mutable_type();
  ::std::string* release_type();
  void set_allocated_type(::std::string* type);

  // @@protoc_insertion_point(class_scope:event.GetEventsSinceResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Struct > events_;
  ::google::protobuf::internal::ArenaStringPtr type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_src_2fprotos_2fevent_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PutEventRequest

// string type = 1;
inline void PutEventRequest::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PutEventRequest::type() const {
  // @@protoc_insertion_point(field_get:event.PutEventRequest.type)
  return type_.GetNoArena();
}
inline void PutEventRequest::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:event.PutEventRequest.type)
}
#if LANG_CXX11
inline void PutEventRequest::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:event.PutEventRequest.type)
}
#endif
inline void PutEventRequest::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:event.PutEventRequest.type)
}
inline void PutEventRequest::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:event.PutEventRequest.type)
}
inline ::std::string* PutEventRequest::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:event.PutEventRequest.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PutEventRequest::release_type() {
  // @@protoc_insertion_point(field_release:event.PutEventRequest.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PutEventRequest::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:event.PutEventRequest.type)
}

// .google.protobuf.Struct payload = 2;
inline bool PutEventRequest::has_payload() const {
  return this != internal_default_instance() && payload_ != NULL;
}
inline const ::google::protobuf::Struct& PutEventRequest::_internal_payload() const {
  return *payload_;
}
inline const ::google::protobuf::Struct& PutEventRequest::payload() const {
  const ::google::protobuf::Struct* p = payload_;
  // @@protoc_insertion_point(field_get:event.PutEventRequest.payload)
  return p != NULL ? *p : *reinterpret_cast<const ::google::protobuf::Struct*>(
      &::google::protobuf::_Struct_default_instance_);
}
inline ::google::protobuf::Struct* PutEventRequest::release_payload() {
  // @@protoc_insertion_point(field_release:event.PutEventRequest.payload)
  
  ::google::protobuf::Struct* temp = payload_;
  payload_ = NULL;
  return temp;
}
inline ::google::protobuf::Struct* PutEventRequest::mutable_payload() {
  
  if (payload_ == NULL) {
    auto* p = CreateMaybeMessage<::google::protobuf::Struct>(GetArenaNoVirtual());
    payload_ = p;
  }
  // @@protoc_insertion_point(field_mutable:event.PutEventRequest.payload)
  return payload_;
}
inline void PutEventRequest::set_allocated_payload(::google::protobuf::Struct* payload) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(payload_);
  }
  if (payload) {
    ::google::protobuf::Arena* submessage_arena =
      reinterpret_cast<::google::protobuf::MessageLite*>(payload)->GetArena();
    if (message_arena != submessage_arena) {
      payload = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, payload, submessage_arena);
    }
    
  } else {
    
  }
  payload_ = payload;
  // @@protoc_insertion_point(field_set_allocated:event.PutEventRequest.payload)
}

// -------------------------------------------------------------------

// EventResponse

// -------------------------------------------------------------------

// GetEventsSinceRequest

// string type = 1;
inline void GetEventsSinceRequest::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetEventsSinceRequest::type() const {
  // @@protoc_insertion_point(field_get:event.GetEventsSinceRequest.type)
  return type_.GetNoArena();
}
inline void GetEventsSinceRequest::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:event.GetEventsSinceRequest.type)
}
#if LANG_CXX11
inline void GetEventsSinceRequest::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:event.GetEventsSinceRequest.type)
}
#endif
inline void GetEventsSinceRequest::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:event.GetEventsSinceRequest.type)
}
inline void GetEventsSinceRequest::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:event.GetEventsSinceRequest.type)
}
inline ::std::string* GetEventsSinceRequest::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:event.GetEventsSinceRequest.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetEventsSinceRequest::release_type() {
  // @@protoc_insertion_point(field_release:event.GetEventsSinceRequest.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetEventsSinceRequest::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:event.GetEventsSinceRequest.type)
}

// int32 id = 2;
inline void GetEventsSinceRequest::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 GetEventsSinceRequest::id() const {
  // @@protoc_insertion_point(field_get:event.GetEventsSinceRequest.id)
  return id_;
}
inline void GetEventsSinceRequest::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:event.GetEventsSinceRequest.id)
}

// -------------------------------------------------------------------

// GetEventsSinceResponse

// string type = 1;
inline void GetEventsSinceResponse::clear_type() {
  type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& GetEventsSinceResponse::type() const {
  // @@protoc_insertion_point(field_get:event.GetEventsSinceResponse.type)
  return type_.GetNoArena();
}
inline void GetEventsSinceResponse::set_type(const ::std::string& value) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:event.GetEventsSinceResponse.type)
}
#if LANG_CXX11
inline void GetEventsSinceResponse::set_type(::std::string&& value) {
  
  type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:event.GetEventsSinceResponse.type)
}
#endif
inline void GetEventsSinceResponse::set_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:event.GetEventsSinceResponse.type)
}
inline void GetEventsSinceResponse::set_type(const char* value, size_t size) {
  
  type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:event.GetEventsSinceResponse.type)
}
inline ::std::string* GetEventsSinceResponse::mutable_type() {
  
  // @@protoc_insertion_point(field_mutable:event.GetEventsSinceResponse.type)
  return type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetEventsSinceResponse::release_type() {
  // @@protoc_insertion_point(field_release:event.GetEventsSinceResponse.type)
  
  return type_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetEventsSinceResponse::set_allocated_type(::std::string* type) {
  if (type != NULL) {
    
  } else {
    
  }
  type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type);
  // @@protoc_insertion_point(field_set_allocated:event.GetEventsSinceResponse.type)
}

// repeated .google.protobuf.Struct events = 2;
inline int GetEventsSinceResponse::events_size() const {
  return events_.size();
}
inline ::google::protobuf::Struct* GetEventsSinceResponse::mutable_events(int index) {
  // @@protoc_insertion_point(field_mutable:event.GetEventsSinceResponse.events)
  return events_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::Struct >*
GetEventsSinceResponse::mutable_events() {
  // @@protoc_insertion_point(field_mutable_list:event.GetEventsSinceResponse.events)
  return &events_;
}
inline const ::google::protobuf::Struct& GetEventsSinceResponse::events(int index) const {
  // @@protoc_insertion_point(field_get:event.GetEventsSinceResponse.events)
  return events_.Get(index);
}
inline ::google::protobuf::Struct* GetEventsSinceResponse::add_events() {
  // @@protoc_insertion_point(field_add:event.GetEventsSinceResponse.events)
  return events_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Struct >&
GetEventsSinceResponse::events() const {
  // @@protoc_insertion_point(field_list:event.GetEventsSinceResponse.events)
  return events_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace event

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_src_2fprotos_2fevent_2eproto
