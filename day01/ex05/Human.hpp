#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H
#include "Brain.hpp"

class Human
{
private:
	Brain _brain;
public:
	Human( void );
	~Human( void );
	Brain &getBrain();
	std::string identify();

};

#endif