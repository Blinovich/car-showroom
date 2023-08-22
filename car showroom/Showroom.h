#pragma once
#include "Admin.h"
#include <iostream>

class Showroom : public Admin {
public:
	Showroom();
	~Showroom();
	void showCars();
	bool Auth(const std::string const name, const std::string const password);
private:

};

