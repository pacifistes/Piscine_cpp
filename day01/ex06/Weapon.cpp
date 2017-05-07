#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	std::cout << "constructor called" << std::endl;
	return;
}

Weapon::~Weapon ( void )
{
	std::cout << "destructeur called" << std::endl;
	return;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}

std::string Weapon::getType()
{
	return this->_type;
}