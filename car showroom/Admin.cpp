#include "Admin.h"

Admin::Admin() {};
Admin::~Admin() {};
std::string Admin::nameAdmin = "admin";
std::string Admin::passwordAdmin = "admin";


bool Admin::IsAdmin(const std::string const name, const std::string const password) {
	if (name == name && password == "admin") {
		return true;
	}
	return false;
}

void menuAdmin() {

}
