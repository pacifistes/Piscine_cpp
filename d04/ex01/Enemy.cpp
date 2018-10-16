#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {
}

Enemy::Enemy(void) {
	return;
}

Enemy::Enemy(Enemy const &enemy) {
	*this = enemy;
	return;
}

Enemy::~Enemy(void) {
	return;
}

Enemy	&Enemy::operator=(Enemy const &enemy) {
	this->_hp = enemy._hp;
	this->_type = enemy._type;
	return *this;
}

std::string const Enemy::getType() const {
	return this->_type;
}

int Enemy::getHP() const {
	return this->_hp;
}

void Enemy::takeDamage(int damage) {
	if (damage < 0)
		return;
	this->_hp -= damage;
	if (this->_hp <= 0)
		delete this;
}
