#pragma once

#include "datastream.hpp"

namespace aingle {

class contract {
#ifdef WASM_USE_SYS_KEYTABLE
   public:
		contract(const keytable &_syskt): syskt(_syskt) {}
   protected:
		keytable syskt;
#endif
};
}
