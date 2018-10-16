#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("default Doc", 25, 5) {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("president", 25, 5), _target(target) {
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialPardonForm) {
	*this = presidentialPardonForm;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &presidentialPardonForm) {
	this->_target = presidentialPardonForm._target;
	return *this;
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	try {
		if (this->getIsSigned() == false) {
		throw Form::NotSignedException();
		}
		if (executor.getGrade() > this->getExecGrade()) {
			throw Form::GradeTooLowException();
		}
		std::cout << executor.getName() << "has been pardoned by Zafod Beeblebrox" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}
}