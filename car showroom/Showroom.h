#pragma once
#include "Admin.h"
#include <iostream>

class Showroom {
public:
	Showroom();
	~Showroom() ;
	void showCars();
	bool Auth(const std::string const name, const std::string const password);
	bool IsUser(const std::string const name, const std::string const password);
	void setName(const std::string const name, const int ind);
	void setPassword(const std::string password);
	std::string getName();
private:
	static std::string nameUser;
};

