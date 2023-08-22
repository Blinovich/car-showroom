#pragma once
#include <iostream>

class Admin {
private:
	Admin();
	virtual ~Admin() = 0;
public:
	bool IsAdmin(const std::string const name, const std::string const password);

};

Admin::~Admin() {};

 