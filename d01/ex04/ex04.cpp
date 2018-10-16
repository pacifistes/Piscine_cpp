#include <iostream>
#include <string>

int		main()
{
	std::string str("HI THIS IS BRAIN");

	std::string *pointerstr;
	std::string	&refstr = str;

	pointerstr = &str;
	std::cout << "la phrase de base est : " << str << std::endl;
	std::cout << "la phrase du pointeur est : " << *pointerstr << std::endl;
	std::cout << "la phrase du referant est : " << refstr << std::endl;
	return 0;
}