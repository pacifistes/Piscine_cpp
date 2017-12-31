#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

# include <iostream>
# include <string>
# include <cstdlib>
class ScavTrap {

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

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const &src);
		void rangeAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void printLifeStatus(void);
		void vaulthunter_dot_exe(std::string const & target);
	private :

};

#endif