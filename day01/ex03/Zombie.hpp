#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>
#include <ctime>

class Zombie
{

private:
	std::string _zombie_name;
	std::string	_type;

public:
	Zombie( void );
	~Zombie( void );
	void	announce( void );
	void			set_type(std::string type);
	void			set_name(std::string name);
	std::string		get_type(void);
	std::string		get_name(void);


};

#endif