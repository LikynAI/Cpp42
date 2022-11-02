#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("Robotomy request", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src):
	Form(src), target(src.target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	(void)src;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->can_execute(executor);
	std::cout << "*Drilling noises*\n";
	if (rand() % 2)
		std::cout << this->target << " has been robotomized successfully\n";
	else
		std::cout << this->target << " has not been robotomized\n";
}