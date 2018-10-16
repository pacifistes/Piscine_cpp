#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return;
}

TacticalMarine::TacticalMarine(TacticalMarine const &tacticalMarine) {
	std::cout << "Tactical Marine ready for battle" << std::endl;
	*this = tacticalMarine;
	return;
}

TacticalMarine::~TacticalMarine(void) {
	std::cout << "Aaargh ..." << std::endl;
	return;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &tacticalMarine) {
	(void)tacticalMarine;
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return *this;
}

ISpaceMarine	*TacticalMarine::clone() const {
	return new TacticalMarine(*this);
}

void			TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT !" << std::endl;
}

void			TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with chainsword *" << std::endl;
}
