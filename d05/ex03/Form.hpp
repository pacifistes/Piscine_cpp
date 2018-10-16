#ifndef FORM_CLASS_H
# define FORM_CLASS_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public :
		Form(std::string const name, int signGrade, int execGrade);
		Form(void);
		~Form(void);
		Form(Form const &form);

		std::string	const	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool				getIsSigned() const;
		void				beSigned(Bureaucrat bureaucrat);
		virtual void		execute(Bureaucrat const & executor) const = 0;

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
		class NotSignedException : public std::exception {
			public:
				virtual ~NotSignedException(void) throw();
				NotSignedException(NotSignedException const &notSignedException) throw();
				Form::NotSignedException & operator=(NotSignedException const &notSignedException) throw();
				NotSignedException(void) throw();
				virtual const char *what() const throw();
		};

	private:
		Form & operator=(Form const &form);
		std::string const _name;
		bool		_isSigned;
		int const	_signGrade;
		int	const	_execGrade;
};
std::ostream & operator<<(std::ostream & o, Form const & object);
#endif
