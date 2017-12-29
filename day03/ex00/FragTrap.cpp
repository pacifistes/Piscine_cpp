#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : 	hitPoints(100), maxHitPoints(100), energyPoints(100),
										maxEnergyPoints(100), level(1), name(name),
										meleeAttackDamage(30),
										rangedAttackDamage(20), armor(5); {
	std::cout << "FR4G-TP <" << this->name << "> arrive by Default at Helios Space Station"<< std::endl;
	return;
}

FragTrap::FragTrap(FragTrap const &src) {
	*this = src;
	std::cout << "FR4G-TP <" << this->name << "> arrive by Copy at Helios Space Station"<< std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FR4G-TP <" << this->name <<"> has been killed" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &src) {
	std::cout << "FR4G-TP <" << src.name << "> arrive by Assignation at Helios Space Station"<< std::endl;	
	return *this;
}

void FragTrap::rangeAttack(std::string const &target) {
	std::cout << "FR4G-TP <" << this->name <<"> attacks <" << target
	<< "> at range, with <" << this->rangedAttackDamage
	<< "> attack damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {
	std::cout << "FR4G-TP <" << this->name <<"> attacks <" << target
	<< "> at meleeAttack, with <" << this->meleeAttackDamage
	<< "> attack damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	printLifeStatus();
	if (amount < 0)
		std::cout << "Can't receive a negative amount of damage." << std::endl; 
	else if (amount <= this->armor) {
		std::cout << "FR4G-TP <" << this->name <<"> thinks he's been attacked but he's not sure. attack too low."
	}
	else {
		if (this->hitPoints - (amount - armor) > 0)
			this->hitPoints -= (amount - armor);
		else
			this->hitPoints = 0;
		std::cout << "FR4G-TP <" << this->name <<"> receive an attack of " << amount
		<< " points of damage and block " << this->armor << " damage." << std::endl;
	}

	printLifeStatus();
}

void FragTrap::beRepaired(unsigned int amount) {
	printLifeStatus();
	std::cout << "FR4G-TP <" << this->name <<"> take a pot for restore <" << amount
	<< "> hit points and energy points." << std::endl;
	if (amount > 0) {
		if (this->hitPoints + amount > this->maxHitPoints)
			this->hitPoints = this->maxHitPoints;
		else
			this->hitPoints = this->hitPoints + amount;
		if (this->energyPoints + amount > this->maxEnergyPoints)
			this->energyPoints = this->maxEnergyPoints;
		else
			this->energyPoints = this->energyPoints + amount;
	}
	else {
		std::cout << "FR4G-TP <" << this->name << "> don't arrive to restore "
		<< "his hitPoints and energyPoints . Can't restore negative amount."
		<< std::endl;
	}
	printLifeStatus();
}

void FragTrap::printLifeStatus(void) {
	std::cout << "FR4G-TP <" << this->name << "> have " << this->hitPoints
	<< "/" << this->maxHitPoints << " hit points and " << this->energyPoints
	<< "/" << this->maxEnergyPoints << " energy points." << std::endl
}

std::string	random_name() {
	std::string name;
	int i;
	std::string	alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	i = 0;
	srand(time(0));
	while (i < 7)
	{
		name += alpha[rand() % alpha.size()];
		i++;
	}
	return name;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->energyPoints < 25) {
		std::cout << "FR4G-TP <" << this->name
		<< "> don't have enought energy for use random Vault Hunter.exe Forms<" << std::endl;
	}
	else {
		this->energyPoints -= 25;
		srand(time(0));
		switch (rand() % 5) {
			case 0:
			break;
			case 1:
			break;
			case 2:
			break;
			case 3:
			break;
			case 4:
			break;
			default:
			break;
		} 
	}
}

