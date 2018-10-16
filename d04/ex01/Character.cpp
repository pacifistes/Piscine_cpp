#include "Character.hpp"

Character::Character(std::string const &name) : _name(name), _weapon(NULL), _ap(40){
	return;
}

Character::Character(void) {
	return;
}

Character::Character(Character const &character) {
	*this = character;
	return;
}

Character::~Character(void) {
	return;
}

Character	&Character::operator=(Character const &character) {
	this->_ap = character._ap;
	this->_name	= character._name;
	this->_weapon = character._weapon;
	return *this;
}

void Character::recoverAP() {
	if (this->_ap > 30)
		this->_ap = 10;
	else
		this->_ap += 10;
}

void Character::equip(AWeapon* aWeapon) {
	this->_weapon = aWeapon;
}

void Character::attack(Enemy* enemy) {
	if (this->_ap == 0 || this->_weapon == NULL || enemy == NULL || this->_ap < this->_weapon->getAPCost())
		return;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	this->_ap -= this->_weapon->getAPCost();
	enemy->takeDamage(this->_weapon->getDamage());
}

std::string const Character::getName() const {
	return this->_name;
}

int Character::getAp() const {
	return this->_ap;
}

AWeapon 	*Character::getEquip() const {
	return this->_weapon;
}

std::ostream & operator<<(std::ostream & o, Character const & character) {
	if (character.getEquip() == NULL) {
		o << character.getName() << " has " << character.getAp();
		o << " and is unarmed" << std::endl;
	}
	else {
		o << character.getName() << " has " << character.getAp();
		o << " and wields a " << character.getEquip()->getName() << std::endl;
	}
	return o;
}