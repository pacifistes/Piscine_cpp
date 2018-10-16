#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {
	return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &plasmaRifle) {
	*this = plasmaRifle;
	return;
}

PlasmaRifle::~PlasmaRifle(void) {
	return;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &plasmaRifle) {
	this->_name = plasmaRifle._name;
	this->_apCost = plasmaRifle._apCost;
	this->_damage = plasmaRifle._damage;
	return *this;
}

void	PlasmaRifle::attack(void) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}