#include "Player.hpp"

Player::Player(void) : AGameEntity('^') {
	return;
}

Player::Player(Player const &player) {
	*this = player;
	return;
}

Player::~Player(void) {
	return;
}

Player	&Player::operator=(Player const &player) {
	this->_classCharacter = player._classCharacter;
	this->_positionX = player._positionX;
	this->_positionY = player._positionY;
	return *this;
}

char	Player::getClassCharacter() const {
	return this->_classCharacter;
}

unsigned int		Player::getPositionX() const {
	return this->_positionX;
}

unsigned int		Player::getPositionY() const {
	return this->_positionY;
}

void				Player::setPositionX(unsigned int x) {
	this->_positionX = x;
}

void				Player::setPositionY(unsigned int y) {
	this->_positionY = y;
}