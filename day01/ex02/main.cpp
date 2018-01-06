#include "ZombieEvent.hpp"

int		main()
{
	Zombie		*newzombie;
	ZombieEvent Event;

	Event.setZombieType("Human");
	newzombie = Event.newZombie("Zombie 1");
	newzombie->announce();
	Event.setZombieType("Random human");
	Event.randomChump();
	std::cout << "Member function randomChump end" << std::endl;
	delete newzombie;
	return 0;
}