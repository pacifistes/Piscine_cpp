#ifndef WEAPON_CLASS_H
# define WEAPON_CLASS_H
#include <string>
#include <iostream>

class Weapon
{
private:
	std::string _type;
public:
	Weapon( std::string type);
	~Weapon( void );
	void setType(std::string type);
	std::string	getType();

};

#endif