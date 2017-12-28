#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony* onHeap = new Pony("Tornado");

	onHeap->tryToFly();
	delete onHeap;
	std::cout << "This is the end of the pony function" << std::endl;
}

void	ponyOnTheStack()
{
	Pony onStack = Pony("Galopin");
	onStack.tryToFly();
	std::cout << "This is the end of the function" << std::endl;
}

int main()
{
	std::cout << "pony on the heap : " << std::endl;
	ponyOnTheHeap();
	std::cout << "pony on the stack : " << std::endl;
	ponyOnTheStack();
	return 0;
}