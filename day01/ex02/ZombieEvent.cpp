#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( void )
{
	std::cout << "constructor called" << std::endl;
	return;
}

ZombieEvent::~ZombieEvent ( void )
{
	std::cout << "destructeur called" << std::endl;
	return;
}

void	ZombieEvent::setZombieType(std::string str)
{
	this->_type = str;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}