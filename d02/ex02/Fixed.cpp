#include "Fixed.hpp"

Fixed::Fixed(void) : _pointValue(0) {
	return;
}

Fixed::Fixed(int const value) {
	this->_pointValue = value * (2 << (this->_fractionalBit - 1));
	return;
}

Fixed::Fixed(float const value) {
	this->_pointValue = roundf(value * (2 << (this->_fractionalBit - 1)));
	return;
}

Fixed::Fixed(Fixed const &fixed) {
	*this = fixed;
	return;
}

Fixed::~Fixed(void) {
	return;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
}

Fixed  &Fixed::min(Fixed &a, Fixed &b) {
	return ((a.getRawBits() < b.getRawBits()) ? a : b);
}

Fixed  &Fixed::max(Fixed &a, Fixed &b) {
	return ((a.getRawBits() > b.getRawBits()) ? a : b);
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
	this->setRawBits(fixed.getRawBits());
	return *this;
}

Fixed Fixed::operator+(Fixed const &fixed) {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator-(Fixed const &fixed) {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(Fixed const &fixed) {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(Fixed const &fixed) {
	if (fixed.toFloat() > -0.000001 && fixed.toFloat() < 0.000001) {
		return Fixed(0);
	}
	return Fixed(this->toFloat() / (float)fixed.toFloat());
}

bool	Fixed::operator>(Fixed const &fixed) {
	return (this->getRawBits() > fixed.getRawBits() ? true : false);	
}

bool	Fixed::operator>=(Fixed const &fixed) {
	return (this->getRawBits() >= fixed.getRawBits() ? true : false);	
}

bool	Fixed::operator<(Fixed const &fixed) {
	return (this->getRawBits() < fixed.getRawBits() ? true : false);	
}

bool	Fixed::operator<=(Fixed const &fixed) {
	return (this->getRawBits() <= fixed.getRawBits() ? true : false);	
}

bool	Fixed::operator==(Fixed const &fixed) {
	return (this->getRawBits() == fixed.getRawBits() ? true : false);	
}

bool	Fixed::operator!=(Fixed const &fixed) {
	return (this->getRawBits() != fixed.getRawBits() ? true : false);	
}

Fixed &Fixed::operator++() {
	this->_pointValue++;
	return *this;
}

Fixed Fixed::operator++(int i) {
	(void)i;
	Fixed tmp = Fixed(*this);
 	++this->_pointValue;
 	return tmp;
}

Fixed &Fixed::operator--() {
	this->_pointValue--;
	return *this;
}

Fixed Fixed::operator--(int i) {
	(void)i;
	Fixed tmp = Fixed(*this);
 	--this->_pointValue;
 	return tmp;
}

std::ostream & operator<<(std::ostream & o, Fixed const & object) {
	o << object.toFloat();
	return o;
}

const int Fixed::_fractionalBit = 8;


