#include "Zombie.hpp"

Zombie::Zombie( std::string name, std::string type ) : _zombie_name(name), _type(type)
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
