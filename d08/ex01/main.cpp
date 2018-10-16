#include <cstdlib>
#include "span.hpp"
int main()
{
	Span sp(7);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::srand(std::time(0));
	std::vector<int> newArray;
	Span ssp(10000);
	int i = 0;
	while (i < 10000) {
		newArray.push_back(std::rand() % 10000);
		i++;
	}
	ssp.addNumbers(newArray);
	std::cout << ssp.shortestSpan() << std::endl;
	std::cout << ssp.longestSpan() << std::endl;
}