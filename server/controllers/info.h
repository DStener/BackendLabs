#pragma once 

#include <libpq-fe.h>

#include <isce/Controller.h>

#include "dto.h"

using namespace isce;

class Info : public Controller {
public:
  static response_t server(request_t request);
  static response_t client(request_t request);
  static response_t database(request_t request);
};