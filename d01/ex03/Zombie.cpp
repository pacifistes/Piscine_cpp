#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _zombieName(name), _type(type) {
	std::cout <<  this->_zombieName << " is born" << std::endl;
	return;
}

Zombie::Zombie(void) {
	std::cout << "Zombie constructor called" << std::endl;
	return;
}

Zombie::~Zombie (void) {
	std::cout << "Zombie destructeur called" << std::endl;
	return;
}

void	Zombie::announce(void) const {
	std::cout << "(" << this->_zombieName << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string	Zombie::getName(void) const {
	return this->_zombieName;
}

std::string	Zombie::getType(void) const {
	return this->_type;
}

void	Zombie::setName(std::string str) {
	this->_zombieName = str;
}

void	Zombie::setType(std::string str) {
	this->_type = str;
}
