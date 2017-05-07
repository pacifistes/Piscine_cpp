#include "ZombieHorde.hpp"

std::string	random_name()
{
	std::string name;
	int i;
	std::string	alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	i = 0;
	//srand(time(0));
	while (i < 7)
	{
		name += alpha[rand() % alpha.size()];
		i++;
	}

	return name;
}

ZombieHorde::ZombieHorde( int N ) : _N(N)
{
	int i; 

	i = 0;
	this->_horde = new Zombie[N];
	while (i < N)
	{
		this->_horde[i].set_name(random_name());
		this->_horde[i].set_type("human");
		i++;
	}
	std::cout << "constructor called" << std::endl;
	return;
}

ZombieHorde::~ZombieHorde ( void )
{
	std::cout << "gjgdestructeur called" << std::endl;
	delete [] this->_horde;
	return;
}

void	ZombieHorde::announce(void)
{
	int i;

	i = 0;
	while (i < this->_N)
	{
		this->_horde[i].announce();
		i++;
	}
}
