#ifndef NINJA_TRAP_CLASS_H
# define NINJA_TRAP_CLASS_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

	public :
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const &ninjaTrap);
		~NinjaTrap(void);
		NinjaTrap & operator=(NinjaTrap const &ninjaTrap);
		void rangeAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;
		void ninjaShoebox(ClapTrap &clapTrap, std::string const & target);
		void ninjaShoebox(FragTrap &fragTrap, std::string const & target);
		void ninjaShoebox(NinjaTrap &ninjaTrap, std::string const & target);
		void ninjaShoebox(ScavTrap &scavTrap, std::string const & target);
	private :
		NinjaTrap(void);
};

#endif
