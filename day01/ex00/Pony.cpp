#include "Pony.hpp"

Pony::Pony( std::string pony_name ) : _pony_name(pony_name)
{
	std::cout <<  this->_pony_name << " is born" << std::endl;
	return;
}

Pony::~Pony ( void )
{
	std::cout <<  this->_pony_name << " is dead" << std::endl;
	return;
}