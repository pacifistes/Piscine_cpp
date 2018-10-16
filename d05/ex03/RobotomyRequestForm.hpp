#ifndef ROBOTOMY_REQUEST_FORM_CLASS_H
# define ROBOTOMY_REQUEST_FORM_CLASS_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public :
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &robotomyRequestForm);
		void		execute(Bureaucrat const & executor) const;

	private:
		std::string _target;
};
#endif
