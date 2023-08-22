#include "Admin.h"

Admin::Admin() {};
Admin::~Admin() {

};

bool Admin::IsAdmin(const std::string const name, const std::string const password) {
	if (name == "admin" && password == "admin") {
		return true;
	}
	return false;
}
