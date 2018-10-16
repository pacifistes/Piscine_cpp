#include "Peon.hpp"
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Dwarf.hpp"

int main() {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Dwarf yozzeath("yozzeath");
	std::cout << robert << jim << joe << yozzeath;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(yozzeath);
	return 0;
}