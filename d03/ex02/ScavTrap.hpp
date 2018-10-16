#ifndef SCAV_TRAP_CLASS_H
# define SCAV_TRAP_CLASS_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scavTrap);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const &scavTrap);
		void rangeAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;
		void challengeNewcomer(std::string const & target);
	private :
		ScavTrap(void);
};

#endif
