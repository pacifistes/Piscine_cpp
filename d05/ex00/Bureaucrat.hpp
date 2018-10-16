#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

#include <iostream>
#include <stdexcept>

class Bureaucrat {

	public :
		Bureaucrat(std::string const name, int grade) throw (Bureaucrat::GradeTooLowException, Bureaucrat::GradeTooHighException);
		virtual ~Bureaucrat(void);
		Bureaucrat(Bureaucrat const &bureaucrat);
		std::string	const	getName() const;
		int					getGrade() const;
		void				upgrade() throw (Bureaucrat::GradeTooHighException);
		void				downgrade() throw (Bureaucrat::GradeTooLowException);

		class GradeTooLowException : public std::exception {
			public:				
				virtual ~GradeTooLowException(void) throw();
				GradeTooLowException(GradeTooLowException const &gradeTooLowException) throw();
				Bureaucrat::GradeTooLowException & operator=(GradeTooLowException const &gradeTooLowException) throw();
				GradeTooLowException(void) throw();
				virtual const char *what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual ~GradeTooHighException(void) throw();
				GradeTooHighException(GradeTooHighException const &gradeTooHighException) throw();
				Bureaucrat::GradeTooHighException & operator=(GradeTooHighException const &gradeTooHighException) throw();
				GradeTooHighException(void) throw();
				virtual const char *what() const throw();
		};

	private :
		Bureaucrat(void);
		Bureaucrat & operator=(Bureaucrat const &bureaucrat);
		const std::string _name;
		int	_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & object);
#endif
