#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5, "FR4G-TP ") {
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " arrive and say : Let's get this party started!"<< std::endl;
	return;
}

FragTrap::FragTrap(void) {
	return;
}

FragTrap::FragTrap(FragTrap const &fragTrap) {
	*this = fragTrap;
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " arrive by Copy and say : Let's get this party started!"<< std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP " << this->_name <<" has been killed in FragTrap destructor" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &fragTrap) {
	std::cout << "FR4G-TP " << fragTrap._name;
	std::cout << " arrive by Assignation and say : Let's get this party started!"<< std::endl;
	std::memcpy(this, &fragTrap, sizeof(FragTrap));	
	return *this;
}

void FragTrap::rangeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << "FR4G-TP " << this->_name << " say : Chk-chk, BOOM!" << std::endl;
	std::cout << "FR4G-TP " << this->_name;
	std::cout <<" attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage	<< " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << "FR4G-TP " << this->_name << " say : Meet professor punch!" << std::endl;
	std::cout << "FR4G-TP " << this->_name;
	std::cout <<" attacks " << target << " at meleeAttack, causing ";
	std::cout << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (!isAlive())
		return;
	_printLifeStatus();
	if (this->_energyPoints < 25) {
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " don't have enought energy for use random Vault Hunter.exe Forms." << std::endl;
	}
	else {
		this->_energyPoints -= 25;
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " attacks " << target;
		switch (std::rand() % 5) {
			case 0:
				std::cout << " with Miniontrap and, causing 50 points of damage !" << std::endl;
			break;
			case 1:
				std::cout << " with Pirate Ship Mode, causing 75 points of damage !" << std::endl;
			break;
			case 2:
				std::cout << " with Blightbot, causing 250 points of damage !" << std::endl;
			break;
			case 3:
				std::cout << " with Mechromagician, causing 45 points of damage !" << std::endl;
			break;
			case 4:
				std::cout << " with One-Shot Wonder, causing 125 points of damage !" << std::endl;
			break;
			default:
				std::cout << " with Shhhhh...trap, causing 50 points of damage !" << std::endl;
			break;
		} 
	}
	_printLifeStatus();
}