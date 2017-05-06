#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _type;
public:
	ZombieEvent( void );
	~ZombieEvent( void );
	
	void	setZombieType( std::string type );
	Zombie*	newZombie(std::string name);

};

#endif