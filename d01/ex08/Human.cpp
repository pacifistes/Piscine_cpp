#include "Human.hpp"

void Human::meleeAttack(std::string const & target) {
	std::cout << "Human attacks " << target;
	std::cout << " with a melee attack" << std::endl;
}

void Human::rangedAttack(std::string const & target) {
	std::cout << "Human attacks " << target;
	std::cout << " with a range attack" << std::endl;
}

void Human::intimidatingShout(std::string const &target) {
	std::cout << "Human attacks " << target;
	std::cout << " with an intimidating shout" << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target) {
	int i;
	std::cout << "Action fuction called with : " << action_name << std::endl;
	void (Human::*arrayOfPointer[3])(std::string const &target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};
	std::string	compare[3] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	i = 0;
	while(i < 3) {
		if (compare[i] == action_name) {
			(this->*arrayOfPointer[i])(target);
			return;
		}
		i++;
	}
	std::cout << "Wrong action name [meleeAttack|rangedAttack|intimidatingShout]" << std::endl;
}