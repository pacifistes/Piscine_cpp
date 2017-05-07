#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "constructor called" << std::endl;
	return;
}

Brain::~Brain ( void )
{
	std::cout << "destructeur called" << std::endl;
	return;
}

std::string	Brain::identify()
{
	std::stringstream	address;
	address << this;
	return address.str();
}