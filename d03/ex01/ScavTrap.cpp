#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : 	_hitPoints(100), _maxHitPoints(100), _energyPoints(50),
										_maxEnergyPoints(50), _level(1), _name(name),
										_meleeAttackDamage(20),
										_rangedAttackDamage(15), _armor(3) {
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
	std::cout << "SC4G-TP " << this->_name <<" has been killed in destructor" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scavTrap) {
	std::cout << "SC4G-TP " << scavTrap._name;
	std::cout << " arrive by Assignation and say : This time it'll be awesome, I promise!"<< std::endl;
	std::memcpy(this, &scavTrap, sizeof(ScavTrap));	
	return *this;
}

unsigned int ScavTrap::getHitPoints(void) {
	return this->_hitPoints;
}

unsigned int ScavTrap::getMaxHitPoints(void) {
	return this->_maxHitPoints;
}

unsigned int ScavTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

unsigned int ScavTrap::getMaxEnergyPoints(void) {
	return this->_maxEnergyPoints;
}

unsigned int ScavTrap::getLevel(void) {
	return this->_level;
}

std::string ScavTrap::getName(void) {
	return this->_name;
}

unsigned int ScavTrap::getMeleeAttackDamage(void) {
	return this->_meleeAttackDamage;
}

unsigned int ScavTrap::getRangedAttackDamage(void) {
	return this->_rangedAttackDamage;
}

unsigned int ScavTrap::getArmor(void) {
	return this->_armor;
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

void ScavTrap::takeDamage(unsigned int amount) {
	if (!isAlive())
		return;
	_printLifeStatus();
	 if (amount <= this->_armor) {
		std::cout << "SC4G-TP " << this->_name;
		std::cout << " thinks he's been attacked but he's not sure. attack too low." << std::endl;
		_printLifeStatus();
	}
	else {
		if ((int)this->_hitPoints - (int)((int)amount - (int)this->_armor) > 0) {
			this->_hitPoints -= (amount - this->_armor);
			std::cout << "SC4G-TP " << this->_name << " say : My assets... frozen!" << std::endl;
			std::cout << "SC4G-TP " << this->_name;
			std::cout <<" receive an attack of " << amount;
			std::cout << " points of damage and block " << this->_armor << " points of damage." << std::endl;
			_printLifeStatus();
		}
		else {
			this->_hitPoints = 0;
			std::cout << "SC4G-TP " << this->_name << " say : My assets... frozen!" << std::endl;
			std::cout << "SC4G-TP " << this->_name;
			std::cout <<" receive an attack of " << amount << " points of damage and block " << std::endl;
			_printLifeStatus();
			std::cout << "SC4G-TP " << this->_name << " die" << std::endl;
		}
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return;
	_printLifeStatus();
	std::cout << "SC4G-TP " << this->_name << " say : I found health!" << std::endl;
	std::cout << "SC4G-TP " << this->_name;
	std::cout <<" take a pot for restore " << amount;
	std::cout << " hit points and energy points." << std::endl;
	if (this->_hitPoints + amount > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints = this->_hitPoints + amount;
	if (this->_energyPoints + amount > this->_maxEnergyPoints)
		this->_energyPoints = this->_maxEnergyPoints;
	else
		this->_energyPoints = this->_energyPoints + amount;
	_printLifeStatus();
}

void ScavTrap::_printLifeStatus(void) {
	std::cout << "SC4G-TP " << this->_name;
	std::cout << " have " << this->_hitPoints << "/" << this->_maxHitPoints << " hit points and ";
	std::cout << this->_energyPoints << "/" << this->_maxEnergyPoints << " energy points." << std::endl;
}

bool ScavTrap::isAlive() const {
	if (this->_hitPoints == 0)
		return false;
	return true;
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