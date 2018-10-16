#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	std::cout << "Weapon constructor called" << std::endl;
	return;
}

Weapon::~Weapon (void) {
	std::cout << "Weapon destructeur called" << std::endl;
	return;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	return;
}

std::string const &Weapon::getType() const {
	return this->_type;
}