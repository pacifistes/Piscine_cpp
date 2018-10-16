#include <iostream>
#include <ctime>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	std::srand(std::time(0));
	try {
		Bureaucrat bob("bob", 12);
		std::cout << bob << std::endl;
		bob.downgrade();
		std::cout << bob << std::endl;
		bob.upgrade();
		std::cout << bob << std::endl;
		bob.upgrade();
		
		ShrubberyCreationForm shrubbery("shrubbery");
		PresidentialPardonForm president("lord");
		RobotomyRequestForm request("request");
		bob.executeForm(shrubbery);
		bob.executeForm(president);
		bob.executeForm(request);
		std::cout << std::endl;

		try {
			shrubbery.beSigned(bob);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl; 
		}
		try {
			request.beSigned(bob);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl; 
		}
		try {
			president.beSigned(bob);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl; 
		}
		std::cout << std::endl;
		bob.executeForm(shrubbery);
		bob.executeForm(president);
		bob.executeForm(request);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}
	return (0);
}