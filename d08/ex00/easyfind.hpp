#include <iostream>
#include <algorithm>

template<typename T>
void easyfind(T array, int intToFind) {
	typename T::iterator it = std::find(array.begin(), array.end(), intToFind);
	if (it != array.end()) {
		 std::cout << intToFind << " find in the list" << std::endl;
	}
	else {
		std::cout << intToFind << " not find in the list" << std::endl;
	}
}