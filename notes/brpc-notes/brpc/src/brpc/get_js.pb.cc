// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/get_js.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "brpc/get_js.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace brpc {

namespace {

const ::google::protobuf::Descriptor* GetJsRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetJsRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* GetJsResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetJsResponse_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* js_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_brpc_2fget_5fjs_2eproto() {
  protobuf_AddDesc_brpc_2fget_5fjs_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "brpc/get_js.proto");
  GOOGLE_CHECK(file != NULL);
  GetJsRequest_descriptor_ = file->message_type(0);
  static const int GetJsRequest_offsets_[1] = {
  };
  GetJsRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GetJsRequest_descriptor_,
      GetJsRequest::default_instance_,
      GetJsRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetJsRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetJsRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GetJsRequest));
  GetJsResponse_descriptor_ = file->message_type(1);
  static const int GetJsResponse_offsets_[1] = {
  };
  GetJsResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GetJsResponse_descriptor_,
      GetJsResponse::default_instance_,
      GetJsResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetJsResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetJsResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GetJsResponse));
  js_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_brpc_2fget_5fjs_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GetJsRequest_descriptor_, &GetJsRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GetJsResponse_descriptor_, &GetJsResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_brpc_2fget_5fjs_2eproto() {
  delete GetJsRequest::default_instance_;
  delete GetJsRequest_reflection_;
  delete GetJsResponse::default_instance_;
  delete GetJsResponse_reflection_;
}

void protobuf_AddDesc_brpc_2fget_5fjs_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021brpc/get_js.proto\022\004brpc\"\016\n\014GetJsReques"
    "t\"\017\n\rGetJsResponse2\332\001\n\002js\0224\n\tsorttable\022\022"
    ".brpc.GetJsRequest\032\023.brpc.GetJsResponse\022"
    "5\n\njquery_min\022\022.brpc.GetJsRequest\032\023.brpc"
    ".GetJsResponse\0223\n\010flot_min\022\022.brpc.GetJsR"
    "equest\032\023.brpc.GetJsResponse\0222\n\007viz_min\022\022"
    ".brpc.GetJsRequest\032\023.brpc.GetJsResponseB"
    "\003\200\001\001", 284);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "brpc/get_js.proto", &protobuf_RegisterTypes);
  GetJsRequest::default_instance_ = new GetJsRequest();
  GetJsResponse::default_instance_ = new GetJsResponse();
  GetJsRequest::default_instance_->InitAsDefaultInstance();
  GetJsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_brpc_2fget_5fjs_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_brpc_2fget_5fjs_2eproto {
  StaticDescriptorInitializer_brpc_2fget_5fjs_2eproto() {
    protobuf_AddDesc_brpc_2fget_5fjs_2eproto();
  }
} static_descriptor_initializer_brpc_2fget_5fjs_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

GetJsRequest::GetJsRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:brpc.GetJsRequest)
}

void GetJsRequest::InitAsDefaultInstance() {
}

GetJsRequest::GetJsRequest(const GetJsRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:brpc.GetJsRequest)
}

void GetJsRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetJsRequest::~GetJsRequest() {
  // @@protoc_insertion_point(destructor:brpc.GetJsRequest)
  SharedDtor();
}

void GetJsRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetJsRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetJsRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetJsRequest_descriptor_;
}

const GetJsRequest& GetJsRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_brpc_2fget_5fjs_2eproto();
  return *default_instance_;
}

GetJsRequest* GetJsRequest::default_instance_ = NULL;

GetJsRequest* GetJsRequest::New() const {
  return new GetJsRequest;
}

void GetJsRequest::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GetJsRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:brpc.GetJsRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:brpc.GetJsRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:brpc.GetJsRequest)
  return false;
#undef DO_
}

void GetJsRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:brpc.GetJsRequest)
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:brpc.GetJsRequest)
}

::google::protobuf::uint8* GetJsRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.GetJsRequest)
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.GetJsRequest)
  return target;
}

int GetJsRequest::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetJsRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GetJsRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GetJsRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GetJsRequest::MergeFrom(const GetJsRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GetJsRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetJsRequest::CopyFrom(const GetJsRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetJsRequest::IsInitialized() const {

  return true;
}

void GetJsRequest::Swap(GetJsRequest* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GetJsRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetJsRequest_descriptor_;
  metadata.reflection = GetJsRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

GetJsResponse::GetJsResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:brpc.GetJsResponse)
}

void GetJsResponse::InitAsDefaultInstance() {
}

GetJsResponse::GetJsResponse(const GetJsResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:brpc.GetJsResponse)
}

void GetJsResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GetJsResponse::~GetJsResponse() {
  // @@protoc_insertion_point(destructor:brpc.GetJsResponse)
  SharedDtor();
}

void GetJsResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetJsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetJsResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetJsResponse_descriptor_;
}

const GetJsResponse& GetJsResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_brpc_2fget_5fjs_2eproto();
  return *default_instance_;
}

GetJsResponse* GetJsResponse::default_instance_ = NULL;

GetJsResponse* GetJsResponse::New() const {
  return new GetJsResponse;
}

void GetJsResponse::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GetJsResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:brpc.GetJsResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:brpc.GetJsResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:brpc.GetJsResponse)
  return false;
#undef DO_
}

void GetJsResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:brpc.GetJsResponse)
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:brpc.GetJsResponse)
}

::google::protobuf::uint8* GetJsResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.GetJsResponse)
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.GetJsResponse)
  return target;
}

int GetJsResponse::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetJsResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GetJsResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GetJsResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GetJsResponse::MergeFrom(const GetJsResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GetJsResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetJsResponse::CopyFrom(const GetJsResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetJsResponse::IsInitialized() const {

  return true;
}

void GetJsResponse::Swap(GetJsResponse* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GetJsResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetJsResponse_descriptor_;
  metadata.reflection = GetJsResponse_reflection_;
  return metadata;
}


// ===================================================================

js::~js() {}

const ::google::protobuf::ServiceDescriptor* js::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return js_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* js::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return js_descriptor_;
}

void js::sorttable(::google::protobuf::RpcController* controller,
                         const ::brpc::GetJsRequest*,
                         ::brpc::GetJsResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method sorttable() not implemented.");
  done->Run();
}

void js::jquery_min(::google::protobuf::RpcController* controller,
                         const ::brpc::GetJsRequest*,
                         ::brpc::GetJsResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method jquery_min() not implemented.");
  done->Run();
}

void js::flot_min(::google::protobuf::RpcController* controller,
                         const ::brpc::GetJsRequest*,
                         ::brpc::GetJsResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method flot_min() not implemented.");
  done->Run();
}

void js::viz_min(::google::protobuf::RpcController* controller,
                         const ::brpc::GetJsRequest*,
                         ::brpc::GetJsResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method viz_min() not implemented.");
  done->Run();
}

void js::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), js_descriptor_);
  switch(method->index()) {
    case 0:
      sorttable(controller,
             ::google::protobuf::down_cast<const ::brpc::GetJsRequest*>(request),
             ::google::protobuf::down_cast< ::brpc::GetJsResponse*>(response),
             done);
      break;
    case 1:
      jquery_min(controller,
             ::google::protobuf::down_cast<const ::brpc::GetJsRequest*>(request),
             ::google::protobuf::down_cast< ::brpc::GetJsResponse*>(response),
             done);
      break;
    case 2:
      flot_min(controller,
             ::google::protobuf::down_cast<const ::brpc::GetJsRequest*>(request),
             ::google::protobuf::down_cast< ::brpc::GetJsResponse*>(response),
             done);
      break;
    case 3:
      viz_min(controller,
             ::google::protobuf::down_cast<const ::brpc::GetJsRequest*>(request),
             ::google::protobuf::down_cast< ::brpc::GetJsResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& js::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::brpc::GetJsRequest::default_instance();
    case 1:
      return ::brpc::GetJsRequest::default_instance();
    case 2:
      return ::brpc::GetJsRequest::default_instance();
    case 3:
      return ::brpc::GetJsRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& js::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::brpc::GetJsResponse::default_instance();
    case 1:
      return ::brpc::GetJsResponse::default_instance();
    case 2:
      return ::brpc::GetJsResponse::default_instance();
    case 3:
      return ::brpc::GetJsResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

js_Stub::js_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
js_Stub::js_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
js_Stub::~js_Stub() {
  if (owns_channel_) delete channel_;
}

void js_Stub::sorttable(::google::protobuf::RpcController* controller,
                              const ::brpc::GetJsRequest* request,
                              ::brpc::GetJsResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void js_Stub::jquery_min(::google::protobuf::RpcController* controller,
                              const ::brpc::GetJsRequest* request,
                              ::brpc::GetJsResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}
void js_Stub::flot_min(::google::protobuf::RpcController* controller,
                              const ::brpc::GetJsRequest* request,
                              ::brpc::GetJsResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(2),
                       controller, request, response, done);
}
void js_Stub::viz_min(::google::protobuf::RpcController* controller,
                              const ::brpc::GetJsRequest* request,
                              ::brpc::GetJsResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(3),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

// @@protoc_insertion_point(global_scope)
