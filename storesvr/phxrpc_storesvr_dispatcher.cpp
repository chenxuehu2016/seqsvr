/* phxrpc_storesvr_dispatcher.h

 Generated by phxrpc_pb2service from storesvr.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#include "phxrpc_storesvr_dispatcher.h"

#include "storesvr.pb.h"
#include "phxrpc_storesvr_service.h"
#include "phxrpc/http.h"
#include "phxrpc/file.h"
#include <errno.h>

StoresvrDispatcher :: StoresvrDispatcher( StoresvrService & service, phxrpc::DispatcherArgs_t * dispatcher_args )
    : service_( service ), dispatcher_args_(dispatcher_args)
{
}

StoresvrDispatcher :: ~StoresvrDispatcher()
{
}

const phxrpc::HttpDispatcher< StoresvrDispatcher >::URIFuncMap & StoresvrDispatcher :: GetURIFuncMap()
{
    static phxrpc::HttpDispatcher< StoresvrDispatcher >::URIFuncMap uri_func_map = {
        {"/storesvr/PHXEcho", &StoresvrDispatcher::PHXEcho},
        {"/storesvr/GetRouterList", &StoresvrDispatcher::GetRouterList},
        {"/storesvr/GetSections", &StoresvrDispatcher::GetSections},
        {"/storesvr/storeSection", &StoresvrDispatcher::storeSection}};
    return uri_func_map;
}

int StoresvrDispatcher :: PHXEcho( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response )
{
    dispatcher_args_->server_monitor->SvrCall(-1, "PHXEcho", 1);

    int ret = 0;

    google::protobuf::StringValue req;
    google::protobuf::StringValue resp;

    //unpack request
    {
        if( ! req.ParseFromString( request.GetContent() ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: FromBuffer fail size %zu ip %s",
                request.GetContent().size(), request.GetClientIP() );
            return -1 * EINVAL;
        }
    }

    //logic process
    {
        if( 0 == ret ) ret = service_.PHXEcho( req, &resp );
    }

    //pack response
    {
        if( ! resp.SerializeToString( &( response->GetContent() ) ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: ToBuffer fail ip %s", request.GetClientIP() );
            return -1 * ENOMEM;
        }
    }

    phxrpc::log( LOG_DEBUG, "RETN: PHXEcho = %d", ret );

    return ret;
}

int StoresvrDispatcher :: GetRouterList( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response )
{
    dispatcher_args_->server_monitor->SvrCall(1, "GetRouterList", 1);

    int ret = 0;

    storesvr::RouterReq req;
    storesvr::RouterResp resp;

    //unpack request
    {
        if( ! req.ParseFromString( request.GetContent() ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: FromBuffer fail size %zu ip %s",
                request.GetContent().size(), request.GetClientIP() );
            return -1 * EINVAL;
        }
    }

    //logic process
    {
        if( 0 == ret ) ret = service_.GetRouterList( req, &resp );
    }

    //pack response
    {
        if( ! resp.SerializeToString( &( response->GetContent() ) ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: ToBuffer fail ip %s", request.GetClientIP() );
            return -1 * ENOMEM;
        }
    }

    phxrpc::log( LOG_DEBUG, "RETN: GetRouterList = %d", ret );

    return ret;
}

int StoresvrDispatcher :: GetSections( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response )
{
    dispatcher_args_->server_monitor->SvrCall(2, "GetSections", 1);

    int ret = 0;

    storesvr::SectionReq req;
    storesvr::SectionResp resp;

    //unpack request
    {
        if( ! req.ParseFromString( request.GetContent() ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: FromBuffer fail size %zu ip %s",
                request.GetContent().size(), request.GetClientIP() );
            return -1 * EINVAL;
        }
    }

    //logic process
    {
        if( 0 == ret ) ret = service_.GetSections( req, &resp );
    }

    //pack response
    {
        if( ! resp.SerializeToString( &( response->GetContent() ) ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: ToBuffer fail ip %s", request.GetClientIP() );
            return -1 * ENOMEM;
        }
    }

    phxrpc::log( LOG_DEBUG, "RETN: GetSections = %d", ret );

    return ret;
}

int StoresvrDispatcher :: storeSection( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response )
{
    dispatcher_args_->server_monitor->SvrCall(2, "storeSection", 1);

    int ret = 0;

    storesvr::StoreReq req;
    storesvr::StoreResp resp;

    //unpack request
    {
        if( ! req.ParseFromString( request.GetContent() ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: FromBuffer fail size %zu ip %s",
                request.GetContent().size(), request.GetClientIP() );
            return -1 * EINVAL;
        }
    }

    //logic process
    {
        if( 0 == ret ) ret = service_.storeSection( req, &resp );
    }

    //pack response
    {
        if( ! resp.SerializeToString( &( response->GetContent() ) ) )
        {
            phxrpc::log( LOG_ERR, "ERROR: ToBuffer fail ip %s", request.GetClientIP() );
            return -1 * ENOMEM;
        }
    }

    phxrpc::log( LOG_DEBUG, "RETN: storeSection = %d", ret );

    return ret;
}


