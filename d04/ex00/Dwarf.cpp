#include "Dwarf.hpp"

Dwarf::Dwarf(std::string name) : Victim(name) {
	std::cout << "Diggy Diggy hole" << std::endl;
	return;
}

Dwarf::Dwarf(void) {
	return;
}

Dwarf::Dwarf(Dwarf const &dwarf) {
	*this = dwarf;
	return;
}

Dwarf::~Dwarf(void) {
	std::cout << "splash..." << std::endl;
	return;
}

Dwarf	&Dwarf::operator=(Dwarf const &dwarf) {
	this->_name = dwarf._name;
	return *this;
}

void Dwarf::getPolymorphed() const {
	std::cout << this->_name;
	std::cout << " has been turned into a butterfly !" << std::endl;
}
