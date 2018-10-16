#include "Human.hpp"

int		main()
{
	Human human;

	human.action("meleeAttack", "zombie");
	human.action("rangedAttack", "zombie");
	human.action("intimidatingShout", "zombie");
	human.action("bananaAttack", "zombie");

	return 0;
}