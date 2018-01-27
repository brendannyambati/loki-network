#ifndef LIBLLARP_CONFIG_HPP
#define LIBLLARP_CONFIG_HPP
#include <map>
#include <string>

#include <llarp/config.h>

namespace llarp
{
  struct Config
  {
    typedef std::map<std::string, std::string> section_t;
 
    section_t router;
    section_t network;
    section_t netdb;
    section_t links;

    bool Load(const char * fname);
    
  };
}


extern "C" {
  struct llarp_config
  {
    llarp::Config impl;
  };
}

#endif