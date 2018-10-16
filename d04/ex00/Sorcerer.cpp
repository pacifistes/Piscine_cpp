#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ", ";
	std::cout << this->_title << ", is born !";
	std::cout << std::endl;
	return;
}

Sorcerer::Sorcerer(void) {
	return;
}

Sorcerer::Sorcerer(Sorcerer const &sorcerer) {
	*this = sorcerer;
	return;
}

Sorcerer::~Sorcerer(void) {
	std::cout << this->_name << ", ";
	std::cout << this->_title << ", is dead. Consequences will never be the same !";
	std::cout << std::endl;
	return;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &sorcerer) {
	std::memcpy(this, &sorcerer, sizeof(Sorcerer));
	return *this;
}

std::string Sorcerer::getName(void) const {
	return this->_name;
}

std::string Sorcerer::getTitle(void) const {
	return this->_title;
}

void Sorcerer::polymorph(Victim const & victim) const {
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & sorcerer) {
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}