#include "Human.hpp"

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