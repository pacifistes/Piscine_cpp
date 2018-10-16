#include <iostream>
#include "Bureaucrat.hpp"

int main() {
	// Bureaucrat bob("bob", 151);
	try {
		Bureaucrat bob("bob", 12);
		std::cout << bob << std::endl;
		bob.downgrade();
		std::cout << bob << std::endl;
		bob.upgrade();
		std::cout << bob << std::endl;
		bob.upgrade();
		Form	form("document", 12, 12);
		std::cout << form << std::endl;		
		form.beSigned(bob);
		std::cout << form << std::endl;
		Form form2("document2", 151, 12);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}
	return (0);
}