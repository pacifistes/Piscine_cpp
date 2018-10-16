#include "Squad.hpp"
#include <iostream>
Squad::Squad(void) : _nbrSquad(0) {
	this->_tabSquad = 0;///
	return;
}

Squad::Squad(Squad const &squad) {
	*this = squad;
	return;
}

Squad::~Squad(void) {
	int i = 0;
	while (i < this->_nbrSquad) {
		delete this->_tabSquad[i];
		i++;
	}
	return;
}

Squad	&Squad::operator=(Squad const &squad) {
	this->_tabSquad = squad._tabSquad;
	this->_nbrSquad = squad._nbrSquad;
	return *this;
}

int Squad::getCount() const {
	return this->_nbrSquad;
}

ISpaceMarine* Squad::getUnit(int index) const {
	if (index < 0 || index >= this->_nbrSquad)
		return 0;///
	return this->_tabSquad[index];
}

int Squad::push(ISpaceMarine* newElem) {
	if (newElem == 0) {//
		return this->_nbrSquad;			
	}
	int i = 0;
	while (i < this->_nbrSquad) {
		if (newElem == this->_tabSquad[i])
			return this->_nbrSquad;
		i++;
	}	
	ISpaceMarine** newtabSquad = new ISpaceMarine*[this->_nbrSquad + 1];
	i = 0;
	while (i < this->_nbrSquad) {
		newtabSquad[i] = this->_tabSquad[i];
		i++;
	}
	newtabSquad[i] = newElem;
	if (this->_nbrSquad)
		delete this->_tabSquad;
	this->_tabSquad = newtabSquad;
	this->_nbrSquad = this->_nbrSquad + 1;
	return this->_nbrSquad;
}