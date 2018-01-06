#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony* onHeap = new Pony("Tornado");

	onHeap->tryToFly();
	delete onHeap;
}

void	ponyOnTheStack()
{
	Pony onStack = Pony("Galopin");
	onStack.tryToFly();
}

int main()
{
	std::cout << "pony on the heap : " << std::endl;
	ponyOnTheHeap();
	std::cout << "the ponyOnTheHeap function is finish" << std::endl;
	std::cout << "pony on the stack : " << std::endl;
	ponyOnTheStack();
	std::cout << "the ponyOnTheStack function is finish" << std::endl;	
	return 0;
}