#ifndef SHRUBBERY_CREATION_FORM_CLASS_H
# define SHRUBBERY_CREATION_FORM_CLASS_H

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &shrubberyCreationForm);
		void		execute(Bureaucrat const & executor) const;

		static const std::string	trees;
	private:
		std::string _target;

};
#endif