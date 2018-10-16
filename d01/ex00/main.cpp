#include "Pony.hpp"

void	ponyOnTheHeap()
{
	std::cout << "pony on the heap called : " << std::endl;
	Pony* onHeap = new Pony("Tornado");

	onHeap->tryToFly();
	delete onHeap;
	std::cout << "the ponyOnTheHeap function is finish" << std::endl;
}

void	ponyOnTheStack()
{
	std::cout << "pony on the stack called : " << std::endl;
	Pony onStack = Pony("Galopin");
	onStack.tryToFly();
	std::cout << "the ponyOnTheStack function is finish" << std::endl;	
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}