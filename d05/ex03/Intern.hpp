#ifndef INTERN_CLASS_H
# define INTERN_CLASS_H

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

	public :
		Intern();
		~Intern(void);
		Intern(Intern const &intern);
		Intern & operator=(Intern const &intern);
		Form	*makeForm(std::string className, std::string target);
};
#endif