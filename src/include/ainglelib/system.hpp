/**
 *  @file
 *  @copyright defined in ont/LICENSE
 */
#pragma once
#include "system.h"
#include <string>

namespace aingle {

   extern "C" void aingle_panic( const char* cstr, const uint32_t len);
   inline void check(bool pred, const char* msg) {
      if (!pred) {
		 aingle_panic(msg, strlen(msg));
      }
   }

   inline void check(bool pred, const std::string& msg) {
      if (!pred) {
		 aingle_panic((char *)msg.c_str(), msg.size());
      }
   }

   inline void check(bool pred, std::string&& msg) {
      if (!pred) {
		 aingle_panic((char *)msg.c_str(), msg.size());
      }
   }
}
