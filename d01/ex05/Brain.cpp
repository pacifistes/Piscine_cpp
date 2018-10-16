#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;
	return;
}

Brain::~Brain (void) {
	std::cout << "Brain destructeur called" << std::endl;
	return;
}

std::string	Brain::identify() const {
	std::stringstream	address;
	address << this;
	return address.str();
}