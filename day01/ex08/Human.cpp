#include "Human.hpp"

HumanA::HumanA(std::string name, Weapon &club) : _name(name), _club(club) {
	std::cout << "HumanA constructor called" << std::endl;
	return;
}

HumanA::~HumanA (void) {
	std::cout << "HumanA destructeur called" << std::endl;
	return;
}

void Human::meleeAttack(std::string const & target) {
	std::cout << "Human attacks " << target;
	std::cout << " with a melee attack" << std::endl;
}

void Human::rangeAttack(std::string const & target) {
	std::cout << "Human attacks " << target;
	std::cout << " with a range attack" << std::endl;
}

void Human::intimidatingShout(std::string const &target) {
	std::cout << "Human attacks " << target;
	std::cout << " with an intimidating shout" << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {

}