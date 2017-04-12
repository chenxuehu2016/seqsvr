/* allocsvr_client.cpp

 Generated by phxrpc_pb2client from allocsvr.proto

*/

#include <iostream>
#include <memory>
#include <stdlib.h>
#include <mutex>

#include "allocsvr_client.h"
#include "phxrpc_allocsvr_stub.h"

#include "phxrpc/rpc.h"

static phxrpc::ClientConfig global_allocsvrclient_config_;
static phxrpc::ClientMonitorPtr global_allocsvrclient_monitor_;

bool AllocsvrClient :: Init( const char * config_file )
{
    return global_allocsvrclient_config_.Read( config_file );
}

const char * AllocsvrClient :: GetPackageName() {
    const char * ret = global_allocsvrclient_config_.GetPackageName();
    if (strlen(ret) == 0) {
        ret = "allocsvr";
    }
    return ret;
}

AllocsvrClient :: AllocsvrClient()
{
    static std::mutex monitor_mutex;
    if ( !global_allocsvrclient_monitor_.get() ) { 
        monitor_mutex.lock();
        if ( !global_allocsvrclient_monitor_.get() ) {
            global_allocsvrclient_monitor_ = phxrpc::MonitorFactory::GetFactory()
                ->CreateClientMonitor( GetPackageName() );
        }
        global_allocsvrclient_config_.SetClientMonitor( global_allocsvrclient_monitor_ );
        monitor_mutex.unlock();
    }
}

AllocsvrClient :: ~AllocsvrClient()
{
}

int AllocsvrClient :: PHXEcho( const google::protobuf::StringValue & req,
        google::protobuf::StringValue * resp )
{
    const phxrpc::Endpoint_t * ep = global_allocsvrclient_config_.GetRandom();

    if(ep != nullptr) {
        phxrpc::BlockTcpStream socket;
        bool open_ret = phxrpc::PhxrpcTcpUtils::Open(&socket, ep->ip, ep->port,
                    global_allocsvrclient_config_.GetConnectTimeoutMS(), NULL, 0, 
                    *(global_allocsvrclient_monitor_.get()));
        if ( open_ret ) {
            socket.SetTimeout(global_allocsvrclient_config_.GetSocketTimeoutMS());

            AllocsvrStub stub(socket, *(global_allocsvrclient_monitor_.get()));
            return stub.PHXEcho(req, resp);
        } 
    }

    return -1;
}

int AllocsvrClient :: PhxBatchEcho( const google::protobuf::StringValue & req,
        google::protobuf::StringValue * resp )
{
    int ret = -1; 
    size_t echo_server_count = 2;
    uthread_begin;
    for (size_t i = 0; i < echo_server_count; i++) {
        uthread_t [=, &uthread_s, &ret](void *) {
            const phxrpc::Endpoint_t * ep = global_allocsvrclient_config_.GetByIndex(i);
            if (ep != nullptr) {
                phxrpc::UThreadTcpStream socket;
                if(phxrpc::PhxrpcTcpUtils::Open(&uthread_s, &socket, ep->ip, ep->port,
                            global_allocsvrclient_config_.GetConnectTimeoutMS(), *(global_allocsvrclient_monitor_.get()))) { 
                    socket.SetTimeout(global_allocsvrclient_config_.GetSocketTimeoutMS());
                    AllocsvrStub stub(socket, *(global_allocsvrclient_monitor_.get()));
                    int this_ret = stub.PHXEcho(req, resp);
                    if (this_ret == 0) {
                        ret = this_ret;
                        uthread_s.Close();
                    }   
                }   
            }
        };  
    }   
    uthread_end;
    return ret;
}

int AllocsvrClient :: GetSeq( const allocsvr::SeqReq & req,
        allocsvr::SeqResp * resp )
{
    const phxrpc::Endpoint_t * ep = global_allocsvrclient_config_.GetRandom();

    if(ep != nullptr) {
        phxrpc::BlockTcpStream socket;
        bool open_ret = phxrpc::PhxrpcTcpUtils::Open(&socket, ep->ip, ep->port,
                    global_allocsvrclient_config_.GetConnectTimeoutMS(), NULL, 0, 
                    *(global_allocsvrclient_monitor_.get()));
        if ( open_ret ) {
            socket.SetTimeout(global_allocsvrclient_config_.GetSocketTimeoutMS());

            AllocsvrStub stub(socket, *(global_allocsvrclient_monitor_.get()));
            return stub.GetSeq(req, resp);
        } 
    }

    return -1;
}

