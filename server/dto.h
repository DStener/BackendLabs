#pragma once

using namespace isce;

// LAB 1 ///////////////////////////////////////////////////////////
struct user_info {
  std::string user_ip;
  std::string user_agent;
};

struct server_info {
  std::string server;
  std::string version;
};

struct database_info {
  std::string name;
  int version;
};