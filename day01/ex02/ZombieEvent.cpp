#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	return;
}

ZombieEvent::~ZombieEvent (void) {
	return;
}

void	ZombieEvent::setZombieType(std::string str) {
	this->_type = str;
}

Zombie* ZombieEvent::newZombie(std::string name) const {
	return (new Zombie(name, this->_type));
}

std::string	random_name() {
	std::string name;
	int i;
	std::string	alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	i = 0;
	srand(time(NULL));
	while (i < 7)
	{
		name += alpha[rand() % alpha.size()];
		i++;
	}
	return name;
}

void	ZombieEvent::randomChump(void) const {
	std::cout << "Member function randomChump called" << std::endl;
	Zombie randomZombie = Zombie(random_name(), this->_type);
	randomZombie.announce();
}