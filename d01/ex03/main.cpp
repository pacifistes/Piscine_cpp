#include "ZombieHorde.hpp"

int		main()
{
	ZombieHorde*	horde;

	horde = new ZombieHorde(5);	
	horde->announce();
	delete horde;
	
	return 0;
}