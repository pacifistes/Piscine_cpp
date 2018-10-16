#ifndef PRESIDENTIAL_PARDON_FORM_CLASS_H
# define PRESIDENTIAL_PARDON_FORM_CLASS_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {

	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm);
		PresidentialPardonForm & operator=(PresidentialPardonForm const &presidentialPardonForm);
		void		execute(Bureaucrat const & executor) const;
	private:
		std::string _target;
};
#endif
