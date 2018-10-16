#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	srand(time(0));
	FragTrap fragTrap = FragTrap("FragTrap");
	ClapTrap clapTrap = ClapTrap("ClapTrap");
	std::string const enemy ("shuggurath");
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
	ScavTrap scavTrap = ScavTrap("scavTrap");
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