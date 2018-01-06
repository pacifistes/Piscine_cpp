#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _zombie_name(name), _type(type) {
	std::cout <<  this->_zombie_name << " is born" << std::endl;
	return;
}

Zombie::~Zombie (void) {
	std::cout <<  this->_zombie_name << " is dead" << std::endl;
	return;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_zombie_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
