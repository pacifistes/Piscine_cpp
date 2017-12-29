#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class Fixed {

	public : 
		Fixed(void);
		Fixed(int const value);
		Fixed(float const value);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed & operator=(Fixed const & src);

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