#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void) {
	std::cout << "* teleports from space *" << std::endl;
	return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &assaultTerminator) {
	std::cout << "* teleports from space *" << std::endl;
	*this = assaultTerminator;
	return;
}

AssaultTerminator::~AssaultTerminator(void) {
	std::cout << "I’ll be back ..." << std::endl;
	return;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &assaultTerminator) {
	(void)assaultTerminator;
	std::cout << "* teleports from space *" << std::endl;
	return *this;
}

ISpaceMarine	*AssaultTerminator::clone() const {
	return new AssaultTerminator(*this);
}

void			AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void			AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
