#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
	return;
}

RadScorpion::RadScorpion(RadScorpion const &RadScorpion) {
	*this = RadScorpion;
	return;
}

RadScorpion::~RadScorpion(void) {
	std::cout << "* SPROTCH *" << std::endl;
	return;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &radScorpion) {
	this->_hp = radScorpion._hp;
	this->_type = radScorpion._type;
	return *this;
}
