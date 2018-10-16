#include "Human.hpp"

Human::Human(void) {
	std::cout << "Human constructor called" << std::endl;
	return;
}

Human::~Human (void) {
	std::cout << "Human destructeur called" << std::endl;
	return;
}

Brain const	&Human::getBrain() const {
	return this->_brain;
}

std::string	Human::identify() {
	return this->_brain.identify();
}