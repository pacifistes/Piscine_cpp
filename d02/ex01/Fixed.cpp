#include "Fixed.hpp"

Fixed::Fixed(void) : _pointValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(int const value) {
	std::cout << "Int constructor called" << std::endl;
	this->_pointValue = value * (2 << (this->_fractionalBit - 1));
	return;
}

Fixed::Fixed(float const value) {
	std::cout << "Float constructor called" << std::endl;
	this->_pointValue = roundf(value * (2 << (this->_fractionalBit - 1)));
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
	return this->_pointValue;
}

void Fixed::setRawBits(int const raw) {
	this->_pointValue = raw;
}

int	Fixed::toInt(void) const {
	return this->_pointValue / (2 << (this->_fractionalBit - 1));
}

float Fixed::toFloat(void) const {
	return  this->_pointValue / (float) (2 << (this->_fractionalBit - 1));
}

Fixed	&Fixed::operator=(Fixed const &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(fixed.getRawBits());
	return *this;
}

std::ostream & operator<<(std::ostream & o, Fixed const & object) {
	o << object.toFloat();
	return o;
}

const int Fixed::_fractionalBit = 8;