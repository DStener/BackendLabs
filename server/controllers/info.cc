#include "info.h"

response_t Info::server(request_t request) {

  server_info info { "Boost.Beast",
                      BOOST_BEAST_VERSION_STRING };

  return response()->json(info);
}

response_t Info::client(request_t request) {

  user_info info { request->ip(),
                   request->header("User-Agent") };

  return response()->json(info);
}

response_t Info::database(request_t request) {

  database_info info { "PostgreSQL",
                       PQlibVersion() };

  return response()->json(info);
}

