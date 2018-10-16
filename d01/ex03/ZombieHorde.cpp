#include "ZombieHorde.hpp"

std::string	ZombieHorde::_randomName() {
	std::string name;
	int i;
	std::string	alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	i = 0;
	while (i < 7) {
		name += alpha[rand() % alpha.size()];
		i++;
	}
	return name;
}

ZombieHorde::ZombieHorde(int n) : _n((n < 0) ? 0 : n) {
	int i; 

	i = 0;
	std::cout << "Zombie horde constructor called" << std::endl;
	this->_horde = new Zombie[this->_n];
	srand(time(0));
	while (i < this->_n)
	{
		this->_horde[i].setName(_randomName());
		this->_horde[i].setType("horde random zombie");
		i++;
	}
	return;
}

ZombieHorde::~ZombieHorde (void) {
	std::cout << "Zombie horde destructeur called" << std::endl;
	delete [] this->_horde;
	return;
}

void	ZombieHorde::announce(void) {
	int i;

	i = 0;
	while (i < this->_n) {
		this->_horde[i].announce();
		i++;
	}
}
