#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed {

	public : 
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &fixed);
		~Fixed(void);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		Fixed & operator=(Fixed const &fixed);
		Fixed operator+(Fixed const &fixed);
		Fixed operator-(Fixed const &fixed);
		Fixed operator*(Fixed const &fixed);
		Fixed operator/(Fixed const &fixed);

		Fixed &operator++();
		Fixed  operator++(int i);
		Fixed &operator--();
		Fixed  operator--(int i);
		bool operator>(Fixed const &fixed);
		bool operator>=(Fixed const &fixed);
		bool operator<(Fixed const &fixed);
		bool operator<=(Fixed const &fixed);
		bool operator==(Fixed const &fixed);
		bool operator!=(Fixed const &fixed);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int	toInt(void) const;
		float toFloat(void) const;
	private :
		int _pointValue;
		static const int _fractionalBit; 
};
std::ostream & operator<<(std::ostream & o, Fixed const & object);

#endif