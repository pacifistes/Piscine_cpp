#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _zombie_name(name), _type(type) {
	return;
}

Zombie::~Zombie (void) {
	return;
}

void	Zombie::announce(void) const {
	std::cout << "<" << this->_zombie_name << " (" << this->_type << ")> Braiiiiiiinnnssss...";
}
