#include "Form.hpp"

Form::Form(void) : _name("default name"), _signGrade(10), _execGrade(10) {
	return;
}

Form::Form(std::string const name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
	else {
		this->_isSigned = false;
	}
	std::string const _name;
}

Form::Form(Form const &form) : _name(form._name), _signGrade(form._signGrade), _execGrade(form._execGrade) {
	*this = form;
	return;
}

Form::~Form(void) {
	return;
}

Form	&Form::operator=(Form const &form) {
	this->_isSigned = form.getIsSigned();
	return *this;
}

std::string	const	Form::getName() const {
	return this->_name;
}

int					Form::getSignGrade() const {
	return this->_signGrade;
}

int					Form::getExecGrade() const {
	return this->_execGrade;
}

bool				Form::getIsSigned() const {
	return this->_isSigned;
}

void				Form::beSigned(Bureaucrat bureaucrat) {
	if (bureaucrat.getGrade() <= this->_signGrade) {
		this->_isSigned = true;
	}
	else {
		throw Form::GradeTooLowException();
	}
}


std::ostream &operator<<(std::ostream & o, Form const & object) {////////////A finir
	if (object.getIsSigned()) {
		o << object.getName() << ", sign status : signed"  << " , sign grade need : ";
		o << object.getSignGrade() << ", executable grade need : " << object.getExecGrade();	
	}
	else {
		o << object.getName() << ", sign status : not signed"  << " , sign grade need : ";
		o << object.getSignGrade() << ", executable grade need : " << object.getExecGrade();	
	}
	return o;
}
/*
**		GRADE_TOO_LOW_EXCEPTION
*/

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
	return;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &gradeTooLowException) throw() {
	*this = gradeTooLowException;
	return;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &gradeTooLowException) throw() {
	(void)gradeTooLowException;
	return *this;
}

Form::GradeTooLowException::GradeTooLowException(void) throw() {
	return;
}

const char	*Form::GradeTooLowException::what() const throw() {
	return("Grade need too low");
}

/*
**		GRADE_TOO_HIGH_EXCEPTION
*/

Form::GradeTooHighException::~GradeTooHighException(void) throw() {
	return;
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &gradeTooHighException) throw() {
	*this = gradeTooHighException;
	return;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &gradeTooHighException) throw() {
	(void)gradeTooHighException;
	return *this;
}

Form::GradeTooHighException::GradeTooHighException(void) throw() {
	return;
}

const char	*Form::GradeTooHighException::what() const throw() {
	return("Grade need too high");
}