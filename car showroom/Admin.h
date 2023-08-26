#pragma once
#include <iostream>
#include <string>
#include <vector>


class Admin {
private:
	static std::string nameAdmin, passwordAdmin;
	void changeCar();
	virtual std::vector<std::string> findCar(const std::string car, const bool a = false);

public:
	Admin();
	~Admin();
	static bool IsAdmin(const std::string const name, const std::string const password);
	void menuAdmin();

};



 