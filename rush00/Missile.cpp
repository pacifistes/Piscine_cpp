/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:30:55 by bbrunell          #+#    #+#             */
/*   Updated: 2018/01/14 18:49:14 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missile.hpp"

Missile::Missile(void) : AGameEntity('|') {
	return;
}

Missile::Missile(Missile const &missile) {
	*this = missile;
	return;
}

Missile::~Missile(void) {
	return;
}

Missile	&Missile::operator=(Missile const &missile) {
	this->_classCharacter = missile._classCharacter;
	this->_positionX = missile._positionX;
	this->_positionY = missile._positionY;
	return *this;
}

char	Missile::getClassCharacter() const {
	return this->_classCharacter;
}

unsigned int		Missile::getPositionX() const {
	return this->_positionX;
}

unsigned int		Missile::getPositionY() const {
	return this->_positionY;
}

void				Missile::setPositionX(unsigned int x) {
	this->_positionX = x;
}

void				Missile::setPositionY(unsigned int y) {
	this->_positionY = y;
}
