#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :	ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, "SC4G-TP ") {
	std::cout << "SC4G-TP " << this->_name;
	std::cout << " arrive and say : This time it'll be awesome, I promise!"<< std::endl;
	return;
}

ScavTrap::ScavTrap(void) {
	return;
}

ScavTrap::ScavTrap(ScavTrap const &scavTrap) {
	*this = scavTrap;
	std::cout << "SC4G-TP " << this->_name;
	std::cout << " arrive by Copy and say : This time it'll be awesome, I promise!"<< std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4G-TP " << this->_name <<" has been killed in ScavTrap destructor" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scavTrap) {
	std::cout << "SC4G-TP " << scavTrap._name;
	std::cout << " arrive by Assignation and say : This time it'll be awesome, I promise!" << std::endl;
	std::memcpy(this, &scavTrap, sizeof(ScavTrap));	
	return *this;
}

void ScavTrap::rangeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << "SC4G-TP " << this->_name << " say : You're listening to 'Short-Range Damage Radio.'" << std::endl;
	std::cout << "SC4G-TP " << this->_name;
	std::cout <<" attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage	<< " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << "SC4G-TP " << this->_name << " say : Guess who?" << std::endl;
	std::cout << "SC4G-TP " << this->_name;
	std::cout <<" attacks " << target << " at meleeAttack, causing ";
	std::cout << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	if (!isAlive())
		return;
	_printLifeStatus();
	if (this->_energyPoints < 25) {
		std::cout << "SC4G-TP " << this->_name;
		std::cout << " don't have enought energy for use challengeNewcomer." << std::endl;
	}
	else {
		this->_energyPoints -= 25;
		std::cout << "SC4G-TP " << this->_name;
		std::cout << " attacks " << target;
		switch (rand() % 5) {
			case 0:
				std::cout << " with Torgue Fiesta, causing 50 points of damage !" << std::endl;
			break;
			case 1:
				std::cout << " with Pirate Ship Mode, causing 75 points of damage !" << std::endl;
			break;
			case 2:
				std::cout << " with Laser Inferno, causing 250 points of damage !" << std::endl;
			break;
			case 3:
				std::cout << " with Gun Wizard, causing 45 points of damage !" << std::endl;
			break;
			case 4:
				std::cout << " with One-Shot Wonder, causing 125 points of damage !" << std::endl;
			break;
			default:
				std::cout << " with Torgue Fiesta, causing 50 points of damage !" << std::endl;
			break;
		} 
	}
	_printLifeStatus();
}