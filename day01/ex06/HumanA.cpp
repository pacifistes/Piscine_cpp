#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &club ) : _name(name), _club(club)
{
	std::cout << "constructor called" << std::endl;
	return;
}

HumanA::~HumanA ( void )
{
	std::cout << "destructeur called" << std::endl;
	return;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_club.getType() << std::endl; 
	return ;
}