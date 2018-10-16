#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
		FragTrap(std::string name);
		FragTrap(FragTrap const &fragtrap);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const &fragtrap);
		void rangeAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;
		void vaulthunter_dot_exe(std::string const & target);
	private :
		FragTrap(void);
};

#endif