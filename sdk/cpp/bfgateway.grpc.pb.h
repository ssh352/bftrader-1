// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: bfgateway.proto
#ifndef GRPC_bfgateway_2eproto__INCLUDED
#define GRPC_bfgateway_2eproto__INCLUDED

#include "bfgateway.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace bftrader {
namespace bfgateway {

class BfGatewayService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status SetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncSetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncSetKvRaw(context, request, cq));
    }
    virtual ::grpc::Status GetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfKvData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>> AsyncGetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>>(AsyncGetKvRaw(context, request, cq));
    }
    virtual ::grpc::Status GetContract(::grpc::ClientContext* context, const ::bftrader::BfGetContractReq& request, ::bftrader::BfContractData* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfContractData>> AsyncGetContract(::grpc::ClientContext* context, const ::bftrader::BfGetContractReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfContractData>>(AsyncGetContractRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReaderInterface< ::bftrader::BfContractData>> GetContractList(::grpc::ClientContext* context, const ::bftrader::BfVoid& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::bftrader::BfContractData>>(GetContractListRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::bftrader::BfContractData>> AsyncGetContractList(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::bftrader::BfContractData>>(AsyncGetContractListRaw(context, request, cq, tag));
    }
    virtual ::grpc::Status Connect(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncConnect(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncConnectRaw(context, request, cq));
    }
    virtual ::grpc::Status Subscribe(::grpc::ClientContext* context, const ::bftrader::BfSubscribeReq& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncSubscribe(::grpc::ClientContext* context, const ::bftrader::BfSubscribeReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncSubscribeRaw(context, request, cq));
    }
    virtual ::grpc::Status SendOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderReq& request, ::bftrader::BfOrderResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfOrderResponse>> AsyncSendOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfOrderResponse>>(AsyncSendOrderRaw(context, request, cq));
    }
    virtual ::grpc::Status CancelOrder(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncCancelOrder(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncCancelOrderRaw(context, request, cq));
    }
    virtual ::grpc::Status QueryAccount(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncQueryAccount(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncQueryAccountRaw(context, request, cq));
    }
    virtual ::grpc::Status QueryPosition(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncQueryPosition(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncQueryPositionRaw(context, request, cq));
    }
    virtual ::grpc::Status Close(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>> AsyncClose(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>>(AsyncCloseRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncSetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfKvData>* AsyncGetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfContractData>* AsyncGetContractRaw(::grpc::ClientContext* context, const ::bftrader::BfGetContractReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientReaderInterface< ::bftrader::BfContractData>* GetContractListRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::bftrader::BfContractData>* AsyncGetContractListRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncConnectRaw(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncSubscribeRaw(::grpc::ClientContext* context, const ::bftrader::BfSubscribeReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfOrderResponse>* AsyncSendOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfOrderReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncCancelOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncQueryAccountRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncQueryPositionRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::bftrader::BfVoid>* AsyncCloseRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status SetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncSetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncSetKvRaw(context, request, cq));
    }
    ::grpc::Status GetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::bftrader::BfKvData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>> AsyncGetKv(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>>(AsyncGetKvRaw(context, request, cq));
    }
    ::grpc::Status GetContract(::grpc::ClientContext* context, const ::bftrader::BfGetContractReq& request, ::bftrader::BfContractData* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfContractData>> AsyncGetContract(::grpc::ClientContext* context, const ::bftrader::BfGetContractReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfContractData>>(AsyncGetContractRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientReader< ::bftrader::BfContractData>> GetContractList(::grpc::ClientContext* context, const ::bftrader::BfVoid& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::bftrader::BfContractData>>(GetContractListRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::bftrader::BfContractData>> AsyncGetContractList(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::bftrader::BfContractData>>(AsyncGetContractListRaw(context, request, cq, tag));
    }
    ::grpc::Status Connect(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncConnect(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncConnectRaw(context, request, cq));
    }
    ::grpc::Status Subscribe(::grpc::ClientContext* context, const ::bftrader::BfSubscribeReq& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncSubscribe(::grpc::ClientContext* context, const ::bftrader::BfSubscribeReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncSubscribeRaw(context, request, cq));
    }
    ::grpc::Status SendOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderReq& request, ::bftrader::BfOrderResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfOrderResponse>> AsyncSendOrder(::grpc::ClientContext* context, const ::bftrader::BfOrderReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfOrderResponse>>(AsyncSendOrderRaw(context, request, cq));
    }
    ::grpc::Status CancelOrder(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncCancelOrder(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncCancelOrderRaw(context, request, cq));
    }
    ::grpc::Status QueryAccount(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncQueryAccount(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncQueryAccountRaw(context, request, cq));
    }
    ::grpc::Status QueryPosition(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncQueryPosition(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncQueryPositionRaw(context, request, cq));
    }
    ::grpc::Status Close(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::bftrader::BfVoid* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>> AsyncClose(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>>(AsyncCloseRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncSetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfKvData>* AsyncGetKvRaw(::grpc::ClientContext* context, const ::bftrader::BfKvData& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfContractData>* AsyncGetContractRaw(::grpc::ClientContext* context, const ::bftrader::BfGetContractReq& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientReader< ::bftrader::BfContractData>* GetContractListRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request) GRPC_OVERRIDE;
    ::grpc::ClientAsyncReader< ::bftrader::BfContractData>* AsyncGetContractListRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq, void* tag) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncConnectRaw(::grpc::ClientContext* context, const ::bftrader::BfConnectReq& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncSubscribeRaw(::grpc::ClientContext* context, const ::bftrader::BfSubscribeReq& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfOrderResponse>* AsyncSendOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfOrderReq& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncCancelOrderRaw(::grpc::ClientContext* context, const ::bftrader::BfCancelOrderReq& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncQueryAccountRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncQueryPositionRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::bftrader::BfVoid>* AsyncCloseRaw(::grpc::ClientContext* context, const ::bftrader::BfVoid& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_SetKv_;
    const ::grpc::RpcMethod rpcmethod_GetKv_;
    const ::grpc::RpcMethod rpcmethod_GetContract_;
    const ::grpc::RpcMethod rpcmethod_GetContractList_;
    const ::grpc::RpcMethod rpcmethod_Connect_;
    const ::grpc::RpcMethod rpcmethod_Subscribe_;
    const ::grpc::RpcMethod rpcmethod_SendOrder_;
    const ::grpc::RpcMethod rpcmethod_CancelOrder_;
    const ::grpc::RpcMethod rpcmethod_QueryAccount_;
    const ::grpc::RpcMethod rpcmethod_QueryPosition_;
    const ::grpc::RpcMethod rpcmethod_Close_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response);
    virtual ::grpc::Status GetContract(::grpc::ServerContext* context, const ::bftrader::BfGetContractReq* request, ::bftrader::BfContractData* response);
    virtual ::grpc::Status GetContractList(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::grpc::ServerWriter< ::bftrader::BfContractData>* writer);
    virtual ::grpc::Status Connect(::grpc::ServerContext* context, const ::bftrader::BfConnectReq* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status Subscribe(::grpc::ServerContext* context, const ::bftrader::BfSubscribeReq* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status SendOrder(::grpc::ServerContext* context, const ::bftrader::BfOrderReq* request, ::bftrader::BfOrderResponse* response);
    virtual ::grpc::Status CancelOrder(::grpc::ServerContext* context, const ::bftrader::BfCancelOrderReq* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status QueryAccount(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status QueryPosition(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response);
    virtual ::grpc::Status Close(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_SetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SetKv() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_SetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSetKv(::grpc::ServerContext* context, ::bftrader::BfKvData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_GetKv() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_GetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetKv(::grpc::ServerContext* context, ::bftrader::BfKvData* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfKvData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetContract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_GetContract() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetContract() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetContract(::grpc::ServerContext* context, const ::bftrader::BfGetContractReq* request, ::bftrader::BfContractData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetContract(::grpc::ServerContext* context, ::bftrader::BfGetContractReq* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfContractData>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetContractList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_GetContractList() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_GetContractList() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetContractList(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::grpc::ServerWriter< ::bftrader::BfContractData>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetContractList(::grpc::ServerContext* context, ::bftrader::BfVoid* request, ::grpc::ServerAsyncWriter< ::bftrader::BfContractData>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(3, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_Connect() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_Connect() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::bftrader::BfConnectReq* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestConnect(::grpc::ServerContext* context, ::bftrader::BfConnectReq* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_Subscribe() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_Subscribe() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* context, const ::bftrader::BfSubscribeReq* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSubscribe(::grpc::ServerContext* context, ::bftrader::BfSubscribeReq* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_SendOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_SendOrder() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_SendOrder() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendOrder(::grpc::ServerContext* context, const ::bftrader::BfOrderReq* request, ::bftrader::BfOrderResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestSendOrder(::grpc::ServerContext* context, ::bftrader::BfOrderReq* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfOrderResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_CancelOrder() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_CancelOrder() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* context, const ::bftrader::BfCancelOrderReq* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestCancelOrder(::grpc::ServerContext* context, ::bftrader::BfCancelOrderReq* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(7, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_QueryAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_QueryAccount() {
      ::grpc::Service::MarkMethodAsync(8);
    }
    ~WithAsyncMethod_QueryAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryAccount(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestQueryAccount(::grpc::ServerContext* context, ::bftrader::BfVoid* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(8, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_QueryPosition : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_QueryPosition() {
      ::grpc::Service::MarkMethodAsync(9);
    }
    ~WithAsyncMethod_QueryPosition() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryPosition(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestQueryPosition(::grpc::ServerContext* context, ::bftrader::BfVoid* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(9, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithAsyncMethod_Close() {
      ::grpc::Service::MarkMethodAsync(10);
    }
    ~WithAsyncMethod_Close() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestClose(::grpc::ServerContext* context, ::bftrader::BfVoid* request, ::grpc::ServerAsyncResponseWriter< ::bftrader::BfVoid>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(10, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_SetKv<WithAsyncMethod_GetKv<WithAsyncMethod_GetContract<WithAsyncMethod_GetContractList<WithAsyncMethod_Connect<WithAsyncMethod_Subscribe<WithAsyncMethod_SendOrder<WithAsyncMethod_CancelOrder<WithAsyncMethod_QueryAccount<WithAsyncMethod_QueryPosition<WithAsyncMethod_Close<Service > > > > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_SetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SetKv() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_SetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetKv : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_GetKv() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_GetKv() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetKv(::grpc::ServerContext* context, const ::bftrader::BfKvData* request, ::bftrader::BfKvData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetContract : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_GetContract() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetContract() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetContract(::grpc::ServerContext* context, const ::bftrader::BfGetContractReq* request, ::bftrader::BfContractData* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetContractList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_GetContractList() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_GetContractList() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetContractList(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::grpc::ServerWriter< ::bftrader::BfContractData>* writer) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Connect : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_Connect() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_Connect() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Connect(::grpc::ServerContext* context, const ::bftrader::BfConnectReq* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Subscribe : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_Subscribe() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_Subscribe() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Subscribe(::grpc::ServerContext* context, const ::bftrader::BfSubscribeReq* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_SendOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_SendOrder() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_SendOrder() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status SendOrder(::grpc::ServerContext* context, const ::bftrader::BfOrderReq* request, ::bftrader::BfOrderResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_CancelOrder : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_CancelOrder() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_CancelOrder() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status CancelOrder(::grpc::ServerContext* context, const ::bftrader::BfCancelOrderReq* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_QueryAccount : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_QueryAccount() {
      ::grpc::Service::MarkMethodGeneric(8);
    }
    ~WithGenericMethod_QueryAccount() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryAccount(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_QueryPosition : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_QueryPosition() {
      ::grpc::Service::MarkMethodGeneric(9);
    }
    ~WithGenericMethod_QueryPosition() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status QueryPosition(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_Close : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(Service *service) {}
   public:
    WithGenericMethod_Close() {
      ::grpc::Service::MarkMethodGeneric(10);
    }
    ~WithGenericMethod_Close() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Close(::grpc::ServerContext* context, const ::bftrader::BfVoid* request, ::bftrader::BfVoid* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace bfgateway
}  // namespace bftrader


#endif  // GRPC_bfgateway_2eproto__INCLUDED