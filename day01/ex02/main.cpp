#include "ZombieEvent.hpp"

int		main()
{
	Zombie		*newzombie;
	ZombieEvent Event;

	Event.setZombieType("Human");
	newzombie = Event.newZombie("Zombie 1");
	newzombie->announce();
	delete newzombie;
	return 0;
}