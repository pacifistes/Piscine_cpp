#include "FragTrap.hpp"

int main() {
	FragTrap* clapTrap = new FragTrap("clapTrap");
	std::string const enemy ("shuggurath");
	clapTrap->rangeAttack(enemy);
	clapTrap->meleeAttack(enemy);
	clapTrap->takeDamage(5);
	clapTrap->vaulthunter_dot_exe(enemy);
	clapTrap->takeDamage(20);
	clapTrap->beRepaired(25);
	clapTrap->takeDamage(50);
	clapTrap->beRepaired(25);
	clapTrap->vaulthunter_dot_exe(enemy);
	clapTrap->vaulthunter_dot_exe(enemy);
	clapTrap->vaulthunter_dot_exe(enemy);
	clapTrap->vaulthunter_dot_exe(enemy);
	clapTrap->vaulthunter_dot_exe(enemy);
	clapTrap->takeDamage(120);
	
	return (0);
}