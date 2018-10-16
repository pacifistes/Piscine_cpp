#ifndef CLAP_TRAP_CLASS_H
# define CLAP_TRAP_CLASS_H

# include <iostream>
# include <string>
# include <cstdlib>

class ClapTrap {

	public :
		ClapTrap(ClapTrap const &clapTrap);
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap & operator=(ClapTrap const &clapTrap);
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
		std::string  getName(void);
		unsigned int getMeleeAttackDamage(void);
		unsigned int getRangedAttackDamage(void);
		unsigned int getArmor(void);
	protected :
		ClapTrap(std::string name, unsigned int hitPoints, unsigned int maxHitPoints, unsigned int energyPoints,
				 unsigned int maxEnergyPoints, unsigned int level, unsigned int meleeAttackDamage, unsigned int rangedAttackDamage, unsigned int armor, std::string className);
		unsigned int 	_hitPoints;
		unsigned int 	_maxHitPoints;
		unsigned int 	_energyPoints;
		unsigned int 	_maxEnergyPoints;
		unsigned int 	_level;
		std::string 	_name;
		unsigned int 	_meleeAttackDamage;
		unsigned int 	_rangedAttackDamage;
		unsigned int	_armor;
		std::string		_className;
		void _printLifeStatus(void);
	private :


};

#endif