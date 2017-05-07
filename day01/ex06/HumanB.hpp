#ifndef HUMANB_CLASS_H
# define HUMANB_CLASS_H
#include "Weapon.hpp"

class HumanB
{

private:
	Weapon *_club;
	std::string _name;

public:
	HumanB( std::string name );
	~HumanB( void );
	void setWeapon(Weapon &club);
	void attack();

};

#endif