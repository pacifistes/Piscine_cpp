#include <list>
#include "easyfind.hpp"
#include <vector>


int	main() {
	int myints[] = {16,2,77,29};

  	std::vector<int>fifth (myints, myints + sizeof(myints) / sizeof(int) );

	::easyfind(fifth, 3);
	::easyfind(fifth, 77);

  	std::list<int> myList(myints, myints + sizeof(myints) / sizeof(int) );
	::easyfind(myList, 3);
	::easyfind(myList, 77);

	return (0);
}