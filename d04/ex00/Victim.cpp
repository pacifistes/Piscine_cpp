#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name) {
	std::cout << "Some random victim called ";
	std::cout << this->_name;
	std::cout << " just popped !";
	std::cout << std::endl;
	return;
}

Victim::Victim(void) {
	return;
}

Victim::Victim(Victim const &victim) {
	*this = victim;
	return;
}

Victim::~Victim(void) {
	std::cout << "Victim ";
	std::cout << this->_name;
	std::cout << " just died for no apparent reason !";
	std::cout << std::endl;
	return;
}

Victim	&Victim::operator=(Victim const &victim) {
	this->_name = victim._name;
	return *this;
}

std::string Victim::getName(void) const {
	return this->_name;
}

void Victim::getPolymorphed() const {
	std::cout << this->_name;
	std::cout << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & victim) {
	o << "I am " << victim.getName() << " and I like otters !" << std::endl;
	return o;
}