#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : 	hitPoints(100), maxHitPoints(100), energyPoints(50),
										maxEnergyPoints(50), level(1), name(name),
										meleeAttackDamage(20),
										rangedAttackDamage(15), armor(3) {
	std::cout << "SC4V-TP " << this->name << " arrive by Default at Triton Flats"<< std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {
	*this = src;
	std::cout << "SC4V-TP " << this->name << " arrive by Copy at Triton Flats"<< std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "SC4V-TP " << this->name <<" has been killed" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &src) {
	std::cout << "SC4V-TP " << src.name << " arrive by Assignation at Triton Flats"<< std::endl;	
	return *this;
}

void ScavTrap::rangeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->name <<" attacks " << target
	<< " at range, causing " << this->rangedAttackDamage
	<< " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {
	std::cout << "SC4V-TP " << this->name <<" attacks " << target
	<< " at meleeAttack, causing " << this->meleeAttackDamage
	<< " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	printLifeStatus();
	 if (amount <= this->armor) {
		std::cout << "SC4V-TP " << this->name << " thinks he's been attacked but he's not sure. attack too low." << std::endl;
	}
	else {
		if ((int)(this->hitPoints - (amount - this->armor)) > 0) {
			this->hitPoints -= (amount - this->armor);
			std::cout << "SC4V-TP " << this->name <<" receive an attack of " << amount
			<< " points of damage and block " << this->armor << " points of damage." << std::endl;
			printLifeStatus();
		}
		else {
			this->hitPoints = 0;
			std::cout << "SC4V-TP " << this->name <<" receive an attack of " << amount
			<< " points of damage and block " << this->armor << " points of damage." << std::endl;
			//je dois kill mon champ
			printLifeStatus();
			delete this;
		}
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	printLifeStatus();
	std::cout << "SC4V-TP " << this->name <<" take a pot for restore " << amount
	<< " hit points and energy points." << std::endl;
	if (this->hitPoints + amount > this->maxHitPoints)
		this->hitPoints = this->maxHitPoints;
	else
		this->hitPoints = this->hitPoints + amount;
	if (this->energyPoints + amount > this->maxEnergyPoints)
		this->energyPoints = this->maxEnergyPoints;
	else
		this->energyPoints = this->energyPoints + amount;
	printLifeStatus();
}

void ScavTrap::printLifeStatus(void) {
	std::cout << "SC4V-TP " << this->name << " have " << this->hitPoints
	<< "/" << this->maxHitPoints << " hit points and " << this->energyPoints
	<< "/" << this->maxEnergyPoints << " energy points." << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target) {
	printLifeStatus();
	if (this->energyPoints < 25) {
		std::cout << "SC4V-TP " << this->name
		<< " don't have enought energy for use challengeNewcomer." << std::endl;
	}
	else {
		this->energyPoints -= 25;
		std::cout << "SC4V-TP " << this->name <<" attacks " << target;
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
	printLifeStatus();
}