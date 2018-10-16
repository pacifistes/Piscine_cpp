#ifndef SCAV_TRAP_CLASS_H
# define SCAV_TRAP_CLASS_H

# include <iostream>
# include <string>
# include <cstdlib>
class ScavTrap {

	public :

		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scavTrap);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const &scavTrap);
		void rangeAttack(std::string const &target) const;
		void meleeAttack(std::string const &target) const;
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);
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
		ScavTrap(void);
		void _printLifeStatus(void);
};

#endif