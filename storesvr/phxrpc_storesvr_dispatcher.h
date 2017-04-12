/* phxrpc_storesvr_dispatcher.h

 Generated by phxrpc_pb2service from storesvr.proto

 Please DO NOT edit unless you know exactly what you are doing.

*/

#pragma once

#include "phxrpc/http.h"
#include "phxrpc/rpc.h"

class StoresvrService;

class StoresvrDispatcher
{
public:
    StoresvrDispatcher( StoresvrService & service, phxrpc::DispatcherArgs_t * dispatcher_args );

    ~StoresvrDispatcher();

    int PHXEcho( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response );

    int GetRouterList( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response );

    int GetSections( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response );

    int storeSection( const phxrpc::HttpRequest & request, phxrpc::HttpResponse * response );

private:
    StoresvrService & service_;
    phxrpc::DispatcherArgs_t * dispatcher_args_;

public:
    static const phxrpc::HttpDispatcher< StoresvrDispatcher >::URIFuncMap & GetURIFuncMap();

};

