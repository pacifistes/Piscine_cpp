#include "Bureaucrat.hpp"

/*
**	Bureaucrat::GradeTooHighException
**	Bureaucrat::GradeTooLowException
*/

Bureaucrat::Bureaucrat(std::string const name, int grade) throw (Bureaucrat::GradeTooLowException, Bureaucrat::GradeTooHighException) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(void) {
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat) {
	*this = bureaucrat;
	return;
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &bureaucrat) {
	this->_grade = bureaucrat._grade;
	return *this;
}

std::string	const	Bureaucrat::getName() const {
	return this->_name;
}

int				Bureaucrat::getGrade() const {
	return this->_grade;
}

void				Bureaucrat::upgrade() throw (Bureaucrat::GradeTooHighException){
	if (this->_grade == 1) {
		throw Bureaucrat::GradeTooHighException();
		return;
	}
	this->_grade--;
}

void				Bureaucrat::downgrade() throw (Bureaucrat::GradeTooLowException){
	if (this->_grade == 150) {
		throw Bureaucrat::GradeTooLowException();
		return;
	}
	this->_grade++;
}

std::ostream &operator<<(std::ostream & o, Bureaucrat const & object) {
	o << object.getName() << ", bureaucrat grade " << object.getGrade();
	return o;
}

/*
**		GRADE_TOO_LOW_EXCEPTION
*/

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
	return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &gradeTooLowException) throw() {
	*this = gradeTooLowException;
	return;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &gradeTooLowException) throw() {
	(void)gradeTooLowException;
	return *this;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw() {
	return;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return("You can't get a grade lower than 150");
}

/*
**		GRADE_TOO_HIGH_EXCEPTION
*/

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() {
	return;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &gradeTooHighException) throw() {
	*this = gradeTooHighException;
	return;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &gradeTooHighException) throw() {
	(void)gradeTooHighException;
	return *this;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw() {
	return;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return("You can't get a grade highter than 1");
}