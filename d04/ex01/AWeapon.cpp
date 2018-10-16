#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name),
																	_apCost(apcost),
																	_damage(damage) {
	return;
}

AWeapon::AWeapon(void) {
	return;
}

AWeapon::AWeapon(AWeapon const &aWeapon) {
	*this = aWeapon;
	return;
}

AWeapon::~AWeapon(void) {
	return;
}

AWeapon	&AWeapon::operator=(AWeapon const &aWeapon) {
	this->_name = aWeapon._name;
	this->_apCost = aWeapon._apCost;
	this->_damage = aWeapon._damage;
	return *this;
}

std::string	AWeapon::getName() const {
	return this->_name;
}

int AWeapon::getDamage() const {
	return this->_damage;
}

int AWeapon::getAPCost() const {
	return this->_apCost;
}