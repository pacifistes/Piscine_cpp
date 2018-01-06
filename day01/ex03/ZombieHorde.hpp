#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde {
	private:
		int		_n;
		Zombie *_horde;

	public:
		ZombieHorde( int n );
		~ZombieHorde( void );
		void	announce( void );
};

#endif