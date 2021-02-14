#include<ainglelib/aingle.hpp>

using namespace aingle;
using std::string;

class hello : public contract {
public:
	using contract::contract;
	string myhello(string s) {

	}
};

AINGLE_DISPATCH(hello, (myhello))
