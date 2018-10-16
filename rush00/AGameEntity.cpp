#include "AGameEntity.hpp"

AGameEntity::AGameEntity() {
	return;
}

AGameEntity::AGameEntity(char c) : _classCharacter(c), _positionX(0), _positionY(0) {
	return;
}

AGameEntity::AGameEntity(AGameEntity const &aGameEntity) {
	*this = aGameEntity;
	return;
}

AGameEntity &AGameEntity::operator=(AGameEntity const &aGameEntity) {
	this->_classCharacter = aGameEntity._classCharacter;
	this->_positionX = aGameEntity._positionX;
	this->_positionY = aGameEntity._positionY;
	return *this;
}

AGameEntity::~AGameEntity() {
	return;
}
