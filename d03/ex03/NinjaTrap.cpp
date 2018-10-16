#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) :	ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, "INAC ") {
	std::cout << "INAC " << this->_name;
	std::cout << " arrive and say : We are the claptraps and we are legion! Viva la Robolution!"<< std::endl;
	return;
}

NinjaTrap::NinjaTrap(void) {
	return;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjaTrap) {
	*this = ninjaTrap;
	std::cout << "INAC " << this->_name;
	std::cout << " arrive by Copy and say : We are the claptraps and we are legion! Viva la Robolution!"<< std::endl;
	return;
}

NinjaTrap::~NinjaTrap(void) {
	std::cout << "INAC " << this->_name <<" has been killed in NinjaTrap destructor" << std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &ninjaTrap) {
	std::cout << "INAC " << ninjaTrap._name;
	std::cout << " arrive by Assignation and say : We are the claptraps and we are legion! Viva la Robolution!" << std::endl;
	std::memcpy(this, &ninjaTrap, sizeof(NinjaTrap));	
	return *this;
}

void NinjaTrap::rangeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << "INAC " << this->_name << " say : Shoryuken!" << std::endl;
	std::cout << "INAC " << this->_name;
	std::cout <<" attacks " << target << " at range, causing ";
	std::cout << this->_rangedAttackDamage	<< " points of damage !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const &target) const {
	if (!isAlive())
		return;
	std::cout << "INAC " << this->_name << " say : Punch punch! Fight!" << std::endl;
	std::cout << "INAC " << this->_name;
	std::cout <<" attacks " << target << " at meleeAttack, causing ";
	std::cout << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clapTrap, std::string const & target) {
	if (!isAlive())
		return;
	_printLifeStatus();
	if (this->_energyPoints < 25) {
		std::cout << "INAC " << this->_name;
		std::cout << " don't have enought energy for use ninjaShoebox" << std::endl;
	}
	else {
		this->_energyPoints -= 25;
		clapTrap.meleeAttack(target);
		
	}
	_printLifeStatus();
}

void NinjaTrap::ninjaShoebox(FragTrap &fragTrap, std::string const & target) {
	if (!isAlive())
		return;
	_printLifeStatus();
	if (this->_energyPoints < 25) {
		std::cout << "INAC " << this->_name;
		std::cout << " don't have enought energy for use ninjaShoebox" << std::endl;
	}
	else {
		this->_energyPoints -= 25;
		fragTrap.meleeAttack(target);
		
	}
	_printLifeStatus();
}

void NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap, std::string const & target) {
	if (!isAlive())
		return;
	_printLifeStatus();
	if (this->_energyPoints < 25) {
		std::cout << "INAC " << this->_name;
		std::cout << " don't have enought energy for use ninjaShoebox" << std::endl;
	}
	else {
		this->_energyPoints -= 25;
		ninjaTrap.meleeAttack(target);
		
	}
	_printLifeStatus();
}

void NinjaTrap::ninjaShoebox(ScavTrap &scavTrap, std::string const & target) {
	if (!isAlive())
		return;
	_printLifeStatus();
	if (this->_energyPoints < 25) {
		std::cout << "INAC " << this->_name;
		std::cout << " don't have enought energy for use ninjaShoebox" << std::endl;
	}
	else {
		this->_energyPoints -= 25;
		scavTrap.meleeAttack(target);
		
	}
	_printLifeStatus();
}