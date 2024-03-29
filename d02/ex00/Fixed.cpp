#include "Fixed.hpp"

Fixed::Fixed(void) : _pointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(Fixed const &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
	return;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_pointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_pointValue = raw;
}

Fixed	&Fixed::operator=(Fixed const &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return *this;
}

const int Fixed::_fractionalBit = 8;