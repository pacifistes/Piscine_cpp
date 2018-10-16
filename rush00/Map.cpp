/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Map.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbrunell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 12:30:52 by bbrunell          #+#    #+#             */
/*   Updated: 2018/01/14 19:23:46 by cpoulet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Map.hpp"

Map::Map(unsigned int nbrLine, unsigned int nbrColumn) : _maxLine(nbrLine), _maxColumn(nbrColumn) {
	this->_tab = new AGameEntity**[this->_maxLine];
	int i = 0;
	while (i < (int)this->_maxLine) {
		this->_tab[i] = new AGameEntity*[this->_maxColumn];
		std::memset(this->_tab[i], 0, sizeof(char*));
		i++;
	}
	this->initBackground();
	return;
}

Map::Map(void) {
	return;
}

Map::Map(Map const &map) {
	*this = map;
	return;
}

Map::~Map(void) {
	delete this->_tab;
	delete this->_bg;
	return;
}

Map	&Map::operator=(Map const &map) {
	this->_maxLine = map._maxLine;
	this->_maxColumn = map._maxColumn;
	this->_tab = map._tab;
	this->_bg = map._bg;
	return *this;
}

void			Map::initBackground() {
	int		i = this->_maxLine / 2;
	this->_bg = new unsigned int[i];
	for(int j = 0; j < i; ++j)
		this->_bg[j] = (rand() % (_maxColumn - 1)) + 1;
}

unsigned int	Map::getMaxY() const {
	return this->_maxLine;
}

unsigned int	Map::getMaxX() const {
	return this->_maxColumn;
}

unsigned int*	Map::getBG() const {
	return this->_bg;
}

AGameEntity***	Map::getMap() const {
	return this->_tab;
}
