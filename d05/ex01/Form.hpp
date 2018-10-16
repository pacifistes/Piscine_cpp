#ifndef FORM_CLASS_H
# define FORM_CLASS_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public :
		Form(std::string const name, int signGrade, int execGrade);
		~Form(void);
		Form(Form const &form);

		std::string	const	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getIsSigned() const;
		void				beSigned(Bureaucrat bureaucrat);

		class GradeTooLowException : public std::exception {
			public:				
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException(GradeTooLowException const &gradeTooLowException) throw();
				Form::GradeTooLowException & operator=(GradeTooLowException const &gradeTooLowException) throw();
				GradeTooLowException(void) throw();
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException(GradeTooHighException const &gradeTooHighException) throw();
				Form::GradeTooHighException & operator=(GradeTooHighException const &gradeTooHighException) throw();
				GradeTooHighException(void) throw();
				virtual const char *what() const throw();
		};

	private:
		Form(void);
		Form & operator=(Form const &form);
		std::string const _name;
		bool		_isSigned;
		int const	_signGrade;
		int	const	_execGrade;
};
std::ostream & operator<<(std::ostream & o, Form const & object);
#endif
