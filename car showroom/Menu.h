#pragma once
#include "Showroom.h"
#include "Admin.h"

class Menu : public Showroom {
public:
	Menu();
	~Menu();
	int showMenu(); // мб сделать friend
private:

};