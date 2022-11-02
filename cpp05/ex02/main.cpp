#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 1);
	std::cout << francis << std::endl;

	Form *forms[] = { new PresidentialPardonForm("target"), new RobotomyRequestForm("target"), new ShrubberyCreationForm("target")};
	for (size_t i = 0; i < 3; i++)
	{
		francis.signForm(*forms[i]);
		francis.executeForm(*forms[i]);
	}
}