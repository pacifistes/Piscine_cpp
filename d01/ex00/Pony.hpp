#ifndef PONY_CLASS_H
# define PONY_CLASS_H

#include <iostream>
#include <string>

class Pony {

private:
	std::string _ponyName;

public:
	Pony(std::string ponyName);
	~Pony(void);

	void tryToFly(void) const;
};

#endif