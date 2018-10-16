#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _zombieName(name), _type(type) {
	std::cout <<  this->_zombieName << " is born" << std::endl;
	return;
}

Zombie::~Zombie (void) {
	std::cout <<  this->_zombieName << " is dead" << std::endl;
	return;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_zombieName << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
