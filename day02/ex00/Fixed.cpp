#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : _pointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_pointValue / (2 << this->_fractionalBit);
}

void Fixed::setRawBits(int const raw) {
	this->_pointValue = raw * (2 << this->_fractionalBit);
}

Fixed	&Fixed::operator=(Fixed const &src) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(src.getRawBits());
	return *this;
}

const int Fixed::_fractionalBit = 8;