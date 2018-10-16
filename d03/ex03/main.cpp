#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main() {
	srand(time(0));
	FragTrap fragTrap = FragTrap("FragTrap");
	std::string const enemy ("shuggurath");
	ScavTrap scavTrap = ScavTrap("scavTrap");
	NinjaTrap ninjaTrap = NinjaTrap("ninjaTrap");
	ninjaTrap.rangeAttack(enemy);
	ninjaTrap.meleeAttack(enemy);
	ninjaTrap.takeDamage(5);
	ninjaTrap.takeDamage(20);
	ninjaTrap.beRepaired(25);
	ninjaTrap.takeDamage(50);
	ninjaTrap.beRepaired(25);
	ninjaTrap.ninjaShoebox(fragTrap, enemy);
	ninjaTrap.ninjaShoebox(scavTrap, enemy);
	ninjaTrap.ninjaShoebox(ninjaTrap, enemy);
	ninjaTrap.ninjaShoebox(scavTrap, enemy);
	ninjaTrap.ninjaShoebox(fragTrap, enemy);
	ninjaTrap.takeDamage(120);

	fragTrap.rangeAttack(enemy);
	fragTrap.meleeAttack(enemy);
	fragTrap.takeDamage(5);
	fragTrap.vaulthunter_dot_exe(enemy);
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(25);
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(25);
	fragTrap.vaulthunter_dot_exe(enemy);
	fragTrap.vaulthunter_dot_exe(enemy);
	fragTrap.vaulthunter_dot_exe(enemy);
	fragTrap.vaulthunter_dot_exe(enemy);
	fragTrap.vaulthunter_dot_exe(enemy);
	fragTrap.takeDamage(120);
	
	scavTrap.rangeAttack(enemy);
	scavTrap.meleeAttack(enemy);
	scavTrap.takeDamage(5);
	scavTrap.challengeNewcomer(enemy);
	scavTrap.takeDamage(20);
	scavTrap.beRepaired(25);
	scavTrap.takeDamage(50);
	scavTrap.beRepaired(25);
	scavTrap.challengeNewcomer(enemy);
	scavTrap.challengeNewcomer(enemy);
	scavTrap.challengeNewcomer(enemy);
	scavTrap.challengeNewcomer(enemy);
	scavTrap.challengeNewcomer(enemy);
	scavTrap.takeDamage(120);

	ClapTrap clapTrap = ClapTrap("ClapTrap");
	clapTrap.rangeAttack(enemy);
	clapTrap.meleeAttack(enemy);
	clapTrap.takeDamage(5);
	clapTrap.takeDamage(20);
	clapTrap.beRepaired(25);
	clapTrap.takeDamage(50);
	clapTrap.beRepaired(25);
	clapTrap.takeDamage(120);
	return (0);
}