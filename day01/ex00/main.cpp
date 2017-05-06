#include "Pony.hpp"


void	ponyOnTheHeap()
{
	Pony* Onheap = new Pony("Carambar");

	delete Onheap;
	std::cout << "This is the end of the pony function" << std::endl;
}

void	ponyOnTheStack()
{
	Pony Onstack = Pony("Galopin");//on the stack
	std::cout << "This is the end of the function" << std::endl;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();

	return 0;
}