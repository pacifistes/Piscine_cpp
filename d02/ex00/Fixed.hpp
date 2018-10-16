#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H

# include <iostream>

class Fixed {

	public : 
		Fixed(void);
		Fixed(Fixed const &fixed);
		~Fixed(void);
		Fixed & operator=(Fixed const & fixed);

		int getRawBits(void) const;
		void setRawBits(int const raw);

	private :
		int _pointValue;
		static const int _fractionalBit;
};

#endif