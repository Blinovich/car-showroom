#include "Showroom.h"

Showroom::Showroom() { }
Showroom::~Showroom() { }
std::string Showroom::nameUser = "user";


void Showroom::showCars() {

}

bool Showroom::Auth(const std::string name, const std::string const password) {
	if (Admin::IsAdmin(name, password)) {
		// menu Admin
		return true;
	}
	if (IsUser(name, password)) {
		setName(name, 0);
	}

	return false;
}

bool Showroom::IsUser(const std::string const name, const std::string const password) {
	// подбор ника по базе, если подходит, то оптравляется на страницу профиля
	return false;
}

std::vector<std::string> Showroom::findCar(const std::string car, const bool a) {
	return std::vector<std::string>();
}

void Showroom::showUserMenu() {
	int temp = 0;
	std::string nameCar = "";

	std::cout << "1. View all cars\n 2. Find a car\n 3. Profile\n 4. Exit";
	std::cin >> temp;

	switch (temp) {
	case 1:
		showCars();
		break;
	case 2:
		

		std::cout << "Enter the make of the car: ";
		std::cin >> nameCar;

		findCar(nameCar);
		break;
	case 3:
		
		break;
	case 4:

		break;

	default:
		break;
	}
}

void Showroom::setName(const std::string const name, const int ind) {
	nameUser = name;
}

void Showroom::setPassword(const std::string password) {

}

std::string Showroom::getName() {
	return nameUser;
}

