#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

#include "Zombie.hpp"
#include <cstdlib>
#include <ctime>

class ZombieEvent
{
private:
	std::string _type;
public:
	ZombieEvent( void );
	~ZombieEvent( void );
	
	void	setZombieType( std::string type );
	Zombie*	newZombie(std::string name);
	void	randomChump(void);

};

#endif