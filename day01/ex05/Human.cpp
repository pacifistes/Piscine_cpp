#include "Human.hpp"

Human::Human( void )
{
	std::cout << "constructor called" << std::endl;
	return;
}

Human::~Human ( void )
{
	std::cout << "destructeur called" << std::endl;
	return;
}

Brain	&Human::getBrain()
{
	return this->_brain;
}

std::string	Human::identify()
{
	return this->_brain.identify();
}