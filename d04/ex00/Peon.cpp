#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) {
	std::cout << "Zog zog" << std::endl;
	return;
}

Peon::Peon(void) {
	return;
}

Peon::Peon(Peon const &peon) {
	*this = peon;
	return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return;
}

Peon	&Peon::operator=(Peon const &peon) {
	this->_name = peon._name;
	return *this;
}

void Peon::getPolymorphed() const {
	std::cout << this->_name;
	std::cout << " has been turned into a pink pony !" << std::endl;
}
