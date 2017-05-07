#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	std::cout << "constructor called" << std::endl;
	return;
}

HumanB::~HumanB ( void )
{
	std::cout << "destructeur called" << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->_club = &club;
	return;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_club->getType() << std::endl; 
	return ;
}