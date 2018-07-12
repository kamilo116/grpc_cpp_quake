// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: canal_data.proto
#ifndef GRPC_canal_5fdata_2eproto__INCLUDED
#define GRPC_canal_5fdata_2eproto__INCLUDED

#include "canal_data.pb.h"

#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace grpccommunication {

class SendingImageData final {
 public:
  static constexpr char const* service_full_name() {
    return "grpccommunication.SendingImageData";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status sendImageData(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpccommunication::ServerConfirmation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> AsyncsendImageData(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(AsyncsendImageDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendImageData(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendImageDataRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* AsyncsendImageDataRaw(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendImageDataRaw(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status sendImageData(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpccommunication::ServerConfirmation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> AsyncsendImageData(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(AsyncsendImageDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendImageData(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendImageDataRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* AsyncsendImageDataRaw(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendImageDataRaw(::grpc::ClientContext* context, const ::grpccommunication::ImageDataMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_sendImageData_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status sendImageData(::grpc::ServerContext* context, const ::grpccommunication::ImageDataMessage* request, ::grpccommunication::ServerConfirmation* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_sendImageData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_sendImageData() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_sendImageData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendImageData(::grpc::ServerContext* context, const ::grpccommunication::ImageDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendImageData(::grpc::ServerContext* context, ::grpccommunication::ImageDataMessage* request, ::grpc::ServerAsyncResponseWriter< ::grpccommunication::ServerConfirmation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_sendImageData<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_sendImageData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_sendImageData() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_sendImageData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendImageData(::grpc::ServerContext* context, const ::grpccommunication::ImageDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_sendImageData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_sendImageData() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_sendImageData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendImageData(::grpc::ServerContext* context, const ::grpccommunication::ImageDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendImageData(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_sendImageData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_sendImageData() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::grpccommunication::ImageDataMessage, ::grpccommunication::ServerConfirmation>(std::bind(&WithStreamedUnaryMethod_sendImageData<BaseClass>::StreamedsendImageData, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_sendImageData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status sendImageData(::grpc::ServerContext* context, const ::grpccommunication::ImageDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsendImageData(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpccommunication::ImageDataMessage,::grpccommunication::ServerConfirmation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_sendImageData<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_sendImageData<Service > StreamedService;
};

class SendingMouseData final {
 public:
  static constexpr char const* service_full_name() {
    return "grpccommunication.SendingMouseData";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status sendMouseData(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpccommunication::ServerConfirmation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> AsyncsendMouseData(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(AsyncsendMouseDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendMouseData(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendMouseDataRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* AsyncsendMouseDataRaw(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendMouseDataRaw(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status sendMouseData(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpccommunication::ServerConfirmation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> AsyncsendMouseData(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(AsyncsendMouseDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendMouseData(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendMouseDataRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* AsyncsendMouseDataRaw(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendMouseDataRaw(::grpc::ClientContext* context, const ::grpccommunication::MouseMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_sendMouseData_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status sendMouseData(::grpc::ServerContext* context, const ::grpccommunication::MouseMessage* request, ::grpccommunication::ServerConfirmation* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_sendMouseData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_sendMouseData() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_sendMouseData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendMouseData(::grpc::ServerContext* context, const ::grpccommunication::MouseMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendMouseData(::grpc::ServerContext* context, ::grpccommunication::MouseMessage* request, ::grpc::ServerAsyncResponseWriter< ::grpccommunication::ServerConfirmation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_sendMouseData<Service > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_sendMouseData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_sendMouseData() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_sendMouseData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendMouseData(::grpc::ServerContext* context, const ::grpccommunication::MouseMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_sendMouseData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_sendMouseData() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_sendMouseData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendMouseData(::grpc::ServerContext* context, const ::grpccommunication::MouseMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendMouseData(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_sendMouseData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_sendMouseData() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::grpccommunication::MouseMessage, ::grpccommunication::ServerConfirmation>(std::bind(&WithStreamedUnaryMethod_sendMouseData<BaseClass>::StreamedsendMouseData, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_sendMouseData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status sendMouseData(::grpc::ServerContext* context, const ::grpccommunication::MouseMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsendMouseData(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpccommunication::MouseMessage,::grpccommunication::ServerConfirmation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_sendMouseData<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_sendMouseData<Service > StreamedService;
};

class SendingQuakeEvent final {
 public:
  static constexpr char const* service_full_name() {
    return "grpccommunication.SendingQuakeEvent";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status sendQuakeEventData(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpccommunication::ServerConfirmation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> AsyncsendQuakeEventData(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(AsyncsendQuakeEventDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendQuakeEventData(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendQuakeEventDataRaw(context, request, cq));
    }
    virtual ::grpc::Status sendInjuryData(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpccommunication::ServerConfirmation* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> AsyncsendInjuryData(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(AsyncsendInjuryDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendInjuryData(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendInjuryDataRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* AsyncsendQuakeEventDataRaw(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendQuakeEventDataRaw(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* AsyncsendInjuryDataRaw(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendInjuryDataRaw(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status sendQuakeEventData(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpccommunication::ServerConfirmation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> AsyncsendQuakeEventData(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(AsyncsendQuakeEventDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendQuakeEventData(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendQuakeEventDataRaw(context, request, cq));
    }
    ::grpc::Status sendInjuryData(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpccommunication::ServerConfirmation* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> AsyncsendInjuryData(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(AsyncsendInjuryDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>> PrepareAsyncsendInjuryData(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>>(PrepareAsyncsendInjuryDataRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* AsyncsendQuakeEventDataRaw(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendQuakeEventDataRaw(::grpc::ClientContext* context, const ::grpccommunication::QuakeEventMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* AsyncsendInjuryDataRaw(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::grpccommunication::ServerConfirmation>* PrepareAsyncsendInjuryDataRaw(::grpc::ClientContext* context, const ::grpccommunication::InjuryDataMessage& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_sendQuakeEventData_;
    const ::grpc::internal::RpcMethod rpcmethod_sendInjuryData_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status sendQuakeEventData(::grpc::ServerContext* context, const ::grpccommunication::QuakeEventMessage* request, ::grpccommunication::ServerConfirmation* response);
    virtual ::grpc::Status sendInjuryData(::grpc::ServerContext* context, const ::grpccommunication::InjuryDataMessage* request, ::grpccommunication::ServerConfirmation* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_sendQuakeEventData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_sendQuakeEventData() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_sendQuakeEventData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendQuakeEventData(::grpc::ServerContext* context, const ::grpccommunication::QuakeEventMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendQuakeEventData(::grpc::ServerContext* context, ::grpccommunication::QuakeEventMessage* request, ::grpc::ServerAsyncResponseWriter< ::grpccommunication::ServerConfirmation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_sendInjuryData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_sendInjuryData() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_sendInjuryData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendInjuryData(::grpc::ServerContext* context, const ::grpccommunication::InjuryDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendInjuryData(::grpc::ServerContext* context, ::grpccommunication::InjuryDataMessage* request, ::grpc::ServerAsyncResponseWriter< ::grpccommunication::ServerConfirmation>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_sendQuakeEventData<WithAsyncMethod_sendInjuryData<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_sendQuakeEventData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_sendQuakeEventData() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_sendQuakeEventData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendQuakeEventData(::grpc::ServerContext* context, const ::grpccommunication::QuakeEventMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_sendInjuryData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_sendInjuryData() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_sendInjuryData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendInjuryData(::grpc::ServerContext* context, const ::grpccommunication::InjuryDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_sendQuakeEventData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_sendQuakeEventData() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_sendQuakeEventData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendQuakeEventData(::grpc::ServerContext* context, const ::grpccommunication::QuakeEventMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendQuakeEventData(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_sendInjuryData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithRawMethod_sendInjuryData() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_sendInjuryData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status sendInjuryData(::grpc::ServerContext* context, const ::grpccommunication::InjuryDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestsendInjuryData(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_sendQuakeEventData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_sendQuakeEventData() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::grpccommunication::QuakeEventMessage, ::grpccommunication::ServerConfirmation>(std::bind(&WithStreamedUnaryMethod_sendQuakeEventData<BaseClass>::StreamedsendQuakeEventData, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_sendQuakeEventData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status sendQuakeEventData(::grpc::ServerContext* context, const ::grpccommunication::QuakeEventMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsendQuakeEventData(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpccommunication::QuakeEventMessage,::grpccommunication::ServerConfirmation>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_sendInjuryData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_sendInjuryData() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::grpccommunication::InjuryDataMessage, ::grpccommunication::ServerConfirmation>(std::bind(&WithStreamedUnaryMethod_sendInjuryData<BaseClass>::StreamedsendInjuryData, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_sendInjuryData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status sendInjuryData(::grpc::ServerContext* context, const ::grpccommunication::InjuryDataMessage* request, ::grpccommunication::ServerConfirmation* response) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedsendInjuryData(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::grpccommunication::InjuryDataMessage,::grpccommunication::ServerConfirmation>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_sendQuakeEventData<WithStreamedUnaryMethod_sendInjuryData<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_sendQuakeEventData<WithStreamedUnaryMethod_sendInjuryData<Service > > StreamedService;
};

}  // namespace grpccommunication


#endif  // GRPC_canal_5fdata_2eproto__INCLUDED