#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

std::string names[] = {"Presidential Pardon Form", "Robotomy Request Form", "Shrubbery Creation Form"};

int main(void)
{
	Bureaucrat francis("Francis", 1);
	std::cout << francis << std::endl;
	Intern randomus;

	for (size_t i = 0; i < 3; i++)
	{
		Form *form = randomus.makeForm(names[i], "target");
		francis.signForm(*form);
		francis.executeForm(*form);
	}
}