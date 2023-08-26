#include "Admin.h"

Admin::Admin() { }
Admin::~Admin() {};

std::string Admin::nameAdmin = "admin";
std::string Admin::passwordAdmin = "admin";


bool Admin::IsAdmin(const std::string const name, const std::string const password) {
	if (name == nameAdmin && password == passwordAdmin) {
		return true;
	}
	return false;
}

void Admin::menuAdmin() {
	std::cout << "User: " << nameAdmin;

	int choice = 0;
	std::cout << "1. See users\n";
	std::cout << "2. Change cars";
	std::cout << "3. Exit";

	switch (choice) {
	case 1:
		// выгрузка из дб
		break;
	case 2:
		changeCar();
		break;
	}
}

void Admin::changeCar() {
	std::string car = "";
	std::cout << "Enter id or car brand: ";
	std::cin >> car;

	if (car.size() >= 1) {
		if (car[0] >= 48 && car[0] <= 57) {
			findCar(car);
		}
		findCar(car, 1);
	}
}

std::vector<std::string> Admin::findCar(const std::string car, const bool a) {
	std::vector<std::string> b;
	return b;
}
