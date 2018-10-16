#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	// Bureaucrat bob("bob", 151);
	try {
		Bureaucrat bob("bob", 1);
		std::cout << bob << std::endl;
		bob.downgrade();
		std::cout << bob << std::endl;
		bob.upgrade();
		std::cout << bob << std::endl;
		bob.upgrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}
	return (0);
}