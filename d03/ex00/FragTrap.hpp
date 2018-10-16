#ifndef FRAG_TRAP_CLASS_H
# define FRAG_TRAP_CLASS_H

# include <iostream>
# include <string>
# include <cstdlib>
class FragTrap {

	public :

		FragTrap(std::string name);
		FragTrap(FragTrap const &fragtrap);
		~FragTrap(void);
		FragTrap & operator=(FragTrap const &fragtrap);
		void rangeAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
		bool isAlive() const ;
		unsigned int getHitPoints(void);
		unsigned int getMaxHitPoints(void);
		unsigned int getEnergyPoints(void);
		unsigned int getMaxEnergyPoints(void);
		unsigned int getLevel(void);
		std::string getName(void);
		unsigned int getMeleeAttackDamage(void);
		unsigned int getRangedAttackDamage(void);
		unsigned int getArmor(void);
	private :
		unsigned int 	_hitPoints;
		unsigned int 	_maxHitPoints;
		unsigned int 	_energyPoints;
		unsigned int 	_maxEnergyPoints;
		unsigned int 	_level;
		std::string 	_name;
		unsigned int 	_meleeAttackDamage;
		unsigned int 	_rangedAttackDamage;
		unsigned int	_armor;
		FragTrap(void);
		void _printLifeStatus(void);
};

#endif