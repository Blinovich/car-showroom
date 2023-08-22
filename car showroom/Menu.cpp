#include "Menu.h"
#include <iostream>

Menu::Menu()
{
}

Menu::~Menu()
{
}

int Menu::showMenu()
{
	std::cout << "Hello!\n\n\tMenu: ";
	std::cout << "1. Show cars\n2. Sing up\n3. Sign in\n4. Exit";
	int choice = 0;
	std::string name, password;
	
	Showroom sr;

	switch (choice) {
	case 1:
		sr.showCars();
		break;
	case 2:
		std::cout << "Enter nickname: ";
		std::cin >> name;
		std::cout << "Enter password: ";
		std::cin >> password;

		sr.Auth(name, password);
		break;
	case 3:
		std::cout << "Enter nickname: ";
		std::cin >> name;
		std::cout << "Enter password: ";
		std::cin >> password;


		break;
	case 4:
		return 0;
	}
	return 0;
}

