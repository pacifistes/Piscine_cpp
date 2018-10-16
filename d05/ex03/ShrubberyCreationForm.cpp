#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("default Doc", 145, 137) {
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("shrubbery", 145, 137), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberyCreationForm) {
	*this = shrubberyCreationForm;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrubberyCreationForm) {
	this->_target = shrubberyCreationForm._target;
	return *this;
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::string fileName = executor.getName() + "_shrubbery";
	try {
		if (this->getIsSigned() == false) {
			throw Form::NotSignedException();
		}
		if (executor.getGrade() > this->getExecGrade()) {
			throw Form::GradeTooLowException();
		}
		std::ofstream ofs(fileName);
		if (ofs.is_open()) {
			ofs << ShrubberyCreationForm::trees << std::endl;
			ofs.close();
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl; 
	}
}

const std::string ShrubberyCreationForm::trees = "\n\
               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | |\n\
       |.|        | |         | |\n\
__\\\\/ ._\\\\//_/__/  ,\\\\_//__\\\\/.  \\_//__/_\n\
";