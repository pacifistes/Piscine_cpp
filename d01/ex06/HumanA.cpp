#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _club(club), _name(name) {
	std::cout << "HumanA constructor called" << std::endl;
	return;
}

HumanA::~HumanA (void) {
	std::cout << "HumanA destructeur called" << std::endl;
	return;
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_club.getType() << std::endl; 
	return ;
}