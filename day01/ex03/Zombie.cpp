#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "constructor called" << std::endl;
	return;
}

Zombie::~Zombie ( void )
{
	std::cout << "destructeur called" << std::endl;
	return;
}

void	Zombie::announce(void)
{
	std::cout << "(" << this->_zombie_name << " (" << this->_type << ")> Braiiiiiiinnnssss...";
}


std::string	Zombie::get_name(void)
{
	return this->_zombie_name;
}
std::string	Zombie::get_type(void)
{
	return this->_type;
}

void	Zombie::set_name(std::string str)
{
	this->_zombie_name = str;
}

void	Zombie::set_type(std::string str)
{
	this->_type = str;
}