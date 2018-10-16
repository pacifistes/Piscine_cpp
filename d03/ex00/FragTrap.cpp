#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : 	_hitPoints(100), _maxHitPoints(100), _energyPoints(100),
										_maxEnergyPoints(100), _level(1), _name(name),
										_meleeAttackDamage(30),
										_rangedAttackDamage(20), _armor(5) {
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
	std::cout << "FR4G-TP " << this->_name <<" has been killed in destructor" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(FragTrap const &fragTrap) {
	std::cout << "FR4G-TP " << fragTrap._name;
	std::cout << " arrive by Assignation and say : Let's get this party started!"<< std::endl;
	std::memcpy(this, &fragTrap, sizeof(FragTrap));	
	return *this;
}

unsigned int FragTrap::getHitPoints(void) {
	return this->_hitPoints;
}

unsigned int FragTrap::getMaxHitPoints(void) {
	return this->_maxHitPoints;
}

unsigned int FragTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

unsigned int FragTrap::getMaxEnergyPoints(void) {
	return this->_maxEnergyPoints;
}

unsigned int FragTrap::getLevel(void) {
	return this->_level;
}

std::string FragTrap::getName(void) {
	return this->_name;
}

unsigned int FragTrap::getMeleeAttackDamage(void) {
	return this->_meleeAttackDamage;
}

unsigned int FragTrap::getRangedAttackDamage(void) {
	return this->_rangedAttackDamage;
}

unsigned int FragTrap::getArmor(void) {
	return this->_armor;
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

void FragTrap::takeDamage(unsigned int amount) {
	if (!isAlive())
		return;
	_printLifeStatus();
	 if (amount <= this->_armor) {
		std::cout << "FR4G-TP " << this->_name;
		std::cout << " thinks he's been attacked but he's not sure. attack too low." << std::endl;
		_printLifeStatus();
	}
	else {
		if ((int)this->_hitPoints - (int)((int)amount - (int)this->_armor) > 0) {
			this->_hitPoints -= (amount - this->_armor);
			std::cout << "FR4G-TP " << this->_name << " say : Metal gears... frozen solid!" << std::endl;
			std::cout << "FR4G-TP " << this->_name;
			std::cout <<" receive an attack of " << amount;
			std::cout << " points of damage and block " << this->_armor << " points of damage." << std::endl;
			_printLifeStatus();
		}
		else {
			this->_hitPoints = 0;
			std::cout << "FR4G-TP " << this->_name << " say : Metal gears... frozen solid!" << std::endl;
			std::cout << "FR4G-TP " << this->_name;
			std::cout <<" receive an attack of " << amount << " points of damage and block " << std::endl;			
			_printLifeStatus();
			std::cout << "FR4G-TP " << this->_name << " die" << std::endl;
		}
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return;
	_printLifeStatus();
	std::cout << "FR4G-TP " << this->_name << " say : Health over here!" << std::endl;
	std::cout << "FR4G-TP " << this->_name;
	std::cout <<" take a pot for restore " << amount;
	std::cout << " hit points and energy points." << std::endl;
	if (this->_hitPoints + (int)amount > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints = this->_hitPoints + amount;
	if (this->_energyPoints + (int)amount > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	else
		this->_energyPoints = this->_energyPoints + amount;
	_printLifeStatus();
}

void FragTrap::_printLifeStatus(void) {
	std::cout << "FR4G-TP " << this->_name;
	std::cout << " have " << this->_hitPoints << "/" << this->_maxHitPoints << " hit points and ";
	std::cout << this->_energyPoints << "/" << this->_maxEnergyPoints << " energy points." << std::endl;
}

bool FragTrap::isAlive() const {
	if (this->_hitPoints == 0)
		return false;
	return true;
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
