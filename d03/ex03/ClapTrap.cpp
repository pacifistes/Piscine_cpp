#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hitPoints(100),
										_maxHitPoints(100),
										_energyPoints(100),
										_maxEnergyPoints(100),
										_level(1),
										_name(name),
										_meleeAttackDamage(30),
										_rangedAttackDamage(10),
										_armor(3),
										_className("CL4P-TP") {
	std::cout << this->_className << this->_name;
	std::cout << " arrive and say : Let's me show you my robpower!"<< std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name, unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints,
				 unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage, unsigned int rangedAttackDamage, unsigned int armor, std::string className) :	_hitPoints(hitPoints),
																									_maxHitPoints(maxHitPoints),
																									_energyPoints(energyPoints),
																									_maxEnergyPoints(maxEnergyPoints),
																									_level(level),
																									_name(name),
																									_meleeAttackDamage(meleeAttackDamage),
																									_rangedAttackDamage(rangedAttackDamage),
																									_armor(armor),
																									_className(className) {
	std::cout << this->_className << this->_name;
	std::cout << " arrive and say : Let's me show you my robpower!"<< std::endl;
	return;
}


ClapTrap::ClapTrap(void) :	_hitPoints(100),
							_maxHitPoints(100),
							_energyPoints(100),
							_maxEnergyPoints(100),
							_level(1),
							_name("clapTrap"),
							_meleeAttackDamage(10),
							_rangedAttackDamage(5),
							_armor(5),
							_className("CL4P-TP ") {
	return;
}

ClapTrap::ClapTrap(ClapTrap const &clapTrap) {
	*this = clapTrap;
	std::cout << this->_className << this->_name;
	std::cout << " arrive and say : Let's me show you my robpower!"<< std::endl;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << this->_className << this->_name <<" has been killed in ClapTrap destructor" << std::endl;
	return;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clapTrap) {
	std::cout << this->_className << clapTrap._name;
	std::cout << " arrive by Assignation and say : Let's me show you my robpower!"<< std::endl;
	std::memcpy(this, &clapTrap, sizeof(ClapTrap));	
	return *this;
}

unsigned int ClapTrap::getHitPoints(void) {
	return this->_hitPoints;
}

unsigned int ClapTrap::getMaxHitPoints(void) {
	return this->_maxHitPoints;
}

unsigned int ClapTrap::getEnergyPoints(void) {
	return this->_energyPoints;
}

unsigned int ClapTrap::getMaxEnergyPoints(void) {
	return this->_maxEnergyPoints;
}

unsigned int ClapTrap::getLevel(void) {
	return this->_level;
}

std::string ClapTrap::getName(void) {
	return this->_name;
}

unsigned int ClapTrap::getMeleeAttackDamage(void) {
	return this->_meleeAttackDamage;
}

unsigned int ClapTrap::getRangedAttackDamage(void) {
	return this->_rangedAttackDamage;
}

unsigned int ClapTrap::getArmor(void) {
	return this->_armor;
}


void ClapTrap::rangeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << this->_className << this->_name << " say : You're listening to 'Short-Range Damage Radio.'" << std::endl;
	std::cout << this->_className << this->_name;
	std::cout <<" attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage	<< " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << this->_className << this->_name << " say : Guess who?" << std::endl;
	std::cout << this->_className << this->_name;
	std::cout <<" attacks " << target << " at meleeAttack, causing ";
	std::cout << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!isAlive())
		return;
	_printLifeStatus();
	 if (amount <= this->_armor) {
		std::cout << this->_className << this->_name;
		std::cout << " thinks he's been attacked but he's not sure. attack too low." << std::endl;
		_printLifeStatus();
	}
	else {
		if ((int)this->_hitPoints - (int)((int)amount - (int)this->_armor) > 0) {
			this->_hitPoints -= (amount - this->_armor);
			std::cout << this->_className << this->_name << " say : My assets... frozen!" << std::endl;
			std::cout << this->_className << this->_name;
			std::cout <<" receive an attack of " << amount;
			std::cout << " points of damage and block " << this->_armor << " points of damage." << std::endl;
			_printLifeStatus();
		}
		else {
			this->_hitPoints = 0;
			std::cout << this->_className << this->_name << " say : My assets... frozen!" << std::endl;
			std::cout << this->_className << this->_name;
			std::cout <<" receive an attack of " << amount << " points of damage and block " << std::endl;
			_printLifeStatus();
			std::cout << this->_className << this->_name << " die" << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!isAlive())
		return;
	_printLifeStatus();
	std::cout << this->_className << this->_name << " say : I found health!" << std::endl;
	std::cout << this->_className << this->_name;
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

void ClapTrap::_printLifeStatus(void) {
	std::cout << this->_className << this->_name;
	std::cout << " have " << this->_hitPoints << "/" << this->_maxHitPoints << " hit points and ";
	std::cout << this->_energyPoints << "/" << this->_maxEnergyPoints << " energy points." << std::endl;
}

bool ClapTrap::isAlive() const {
	if (this->_hitPoints == 0)
		return false;
	return true;
}