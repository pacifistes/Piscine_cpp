#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return;
}

SuperMutant::SuperMutant(SuperMutant const &superMutant) {
	*this = superMutant;
	return;
}

SuperMutant::~SuperMutant(void) {
	std::cout << "Aaargh ..." << std::endl;
	return;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &superMutant) {
	this->_hp = superMutant._hp;
	this->_type = superMutant._type;
	return *this;
}

void 	SuperMutant::takeDamage(int damage) {
	if (damage - 3 < 0)
		return;
	if (this->_hp - (damage - 3) <= 0) {
		delete this;
	}
	else {
		this->_hp -= (damage - 3); 
	}
}