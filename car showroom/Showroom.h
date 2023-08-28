#pragma once
#include <iostream>
#include <vector>

#include "Admin.h"


class Showroom : private Admin {
public:
	Showroom();
	~Showroom();
	void showCars();
	bool Auth(const std::string const name, const std::string const password);
	bool IsUser(const std::string const name, const std::string const password);
	std::vector<std::string> findCar(const std::string car, const bool a = false) override;
	void showUserMenu();

	std::string getName();
	
private:
	static std::string nameUser;
	void setName(const std::string const name, const int ind);
	void setPassword(const std::string password);
};

