#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <iostream>
#include <string>

class Zombie {

private:
	std::string _zombie_name;
	std::string	_type;

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
	void	announce(void) const;
};

#endif