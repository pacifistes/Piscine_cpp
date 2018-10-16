#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {
	return;
}

PowerFist::PowerFist(PowerFist const &powerFist) {
	*this = powerFist;
	return;
}

PowerFist::~PowerFist(void) {
	return;
}

PowerFist	&PowerFist::operator=(PowerFist const &powerFist) {
	this->_name = powerFist._name;
	this->_apCost = powerFist._apCost;
	this->_damage = powerFist._damage;
	return *this;
}

void	PowerFist::attack(void) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}