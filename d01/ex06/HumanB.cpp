#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	std::cout << "HumanB constructor called" << std::endl;
	return;
}

HumanB::~HumanB (void) {
	std::cout << "HumanB destructeur called" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &club) {
	this->_club = &club;
	return;
}

void	HumanB::attack() const {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_club->getType() << std::endl; 
	return ;
}