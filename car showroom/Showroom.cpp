#include "Showroom.h"

Showroom::Showroom() {}

Showroom::~Showroom()
{
}

void Showroom::showCars() {

}

bool Showroom::Auth(const std::string name, const std::string const password)
{
	Admin::IsAdmin(name, password);
	return false;
}
