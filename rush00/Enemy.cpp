#include "Enemy.hpp"

Enemy::Enemy(void) {
	this->_classCharacter = '#';
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
	this->_classCharacter = enemy._classCharacter;
	this->_positionX = enemy._positionX;
	this->_positionY = enemy._positionY;
	return *this;
}

char	Enemy::getClassCharacter() const {
	return this->_classCharacter;
}

unsigned int		Enemy::getPositionX() const {
	return this->_positionX;
}

unsigned int		Enemy::getPositionY() const {
	return this->_positionY;
}

void				Enemy::setPositionX(unsigned int x) {
	this->_positionX = x;
}

void				Enemy::setPositionY(unsigned int y) {
	this->_positionY = y;
}
