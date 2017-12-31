#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

# include <iostream>
# include <string>
# include <cstdlib>
class FragTrap {

	public :
		int hitPoints;
		int maxHitPoints;
		int energyPoints;
		int maxEnergyPoints;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armor;

		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const &src);
		void rangeAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printLifeStatus(void);
		void vaulthunter_dot_exe(std::string const & target);
	private :

};

#endif