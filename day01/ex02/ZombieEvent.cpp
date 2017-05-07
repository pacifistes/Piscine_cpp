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



std::string	random_name()
{
	std::string name;
	int i;
	std::string	alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	i = 0;
	srand(time(0));
	while (i < 7)
	{
		name += alpha[rand() % alpha.size()];
		i++;
	}

	return name;
}

void	ZombieEvent::randomChump(void)
{
	Zombie randomZombie = Zombie(random_name(), this->_type);
	randomZombie.announce();
}