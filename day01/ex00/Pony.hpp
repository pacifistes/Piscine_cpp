#ifndef PONY_CLASS_H
# define PONY_CLASS_H

#include <iostream>
#include <string>

class Pony
{

private:
	std::string _pony_name;

public:
	Pony( std::string pony_name );
	~Pony( void );

	void tryToFly(void) const;
};

#endif