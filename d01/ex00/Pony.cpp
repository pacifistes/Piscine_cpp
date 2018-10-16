#include "Pony.hpp"

Pony::Pony(std::string ponyName) : _ponyName(ponyName) {
	std::cout <<  this->_ponyName << " is born" << std::endl;
	return;
}

Pony::~Pony (void) {
	std::cout <<  this->_ponyName << " is dead" << std::endl;
	return;
}

void Pony::tryToFly(void) const {
	std::cout << this->_ponyName << " try to fly" << std::endl;
}