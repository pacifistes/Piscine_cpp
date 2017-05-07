#ifndef ZOMBIEHORDE_CLASS_H
# define ZOMBIEHORDE_CLASS_H

#include "Zombie.hpp"
#include <cstdlib>

class ZombieHorde
{

private:
	int		_N;
	Zombie *_horde;


public:
	ZombieHorde( int N );
	~ZombieHorde( void );
	void	announce( void );


};

#endif