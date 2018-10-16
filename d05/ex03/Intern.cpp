#include "Intern.hpp"

Intern::Intern(void) {
	return;
}

Intern::Intern(Intern const &intern) {
	*this = intern;
	return;
}

Intern::~Intern(void) {
	return;
}

Intern	&Intern::operator=(Intern const &intern) {
	(void)intern;
	return *this;
}

Form	*Intern::makeForm(std::string className, std::string target) {
	if (className == "robotomy request") {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (className == "presidential pardon") {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new PresidentialPardonForm(target);
	}
	else if (className == "shrubbery creation") {
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new ShrubberyCreationForm(target);
	}
	std::cout << "Intern can't creates form because the class name is wrong" << std::endl;
	return 0;
}