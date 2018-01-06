#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie constructor called" << std::endl;
	return;
}

Zombie::~Zombie (void) {
	std::cout << "Zombie destructeur called" << std::endl;
	return;
}

void	Zombie::announce(void) const {
	std::cout << "(" << this->_zombie_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::get_name(void) const {
	return this->_zombie_name;
}

std::string	Zombie::get_type(void) const {
	return this->_type;
}

void	Zombie::set_name(std::string str) {
	this->_zombie_name = str;
}

void	Zombie::set_type(std::string str) {
	this->_type = str;
}