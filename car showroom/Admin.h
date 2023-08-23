#pragma once
#include <iostream>

class Admin {
private:
	Admin();
	virtual ~Admin() = 0;
	static std::string nameAdmin, passwordAdmin;
public:
	static bool IsAdmin(const std::string const name, const std::string const password);

};



 