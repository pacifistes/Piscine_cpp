#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("default Doc", 72, 45) {
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("robot", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyRequestForm) {
	*this = robotomyRequestForm;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &robotomyRequestForm) {
	this->_target = robotomyRequestForm._target;
	return *this;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	try {
		if (this->getIsSigned() == false) {
			throw Form::NotSignedException();
		}
		if (executor.getGrade() > this->getExecGrade()) {
			throw Form::GradeTooLowException();
		}
		if (std::rand() % 2 == 0) {
			std::cout << executor.getName() << " has been robotomized successfully" << std::endl;
		}
		else {
			std::cout << executor.getName() << " hasn't been robotomized successfully" << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}
}