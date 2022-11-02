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
<<<<<<< HEAD
	Bureaucrat francis("Francis", 1);
	std::cout << francis << std::endl;
=======
	Bureaucrat francis("Francis", 20);
	std::cout << francis << '\n';
>>>>>>> 654d3fd6adae5d5d7a2af8631dcf1adc8c9d3806
	Intern randomus;

	for (size_t i = 0; i < 3; i++)
	{
		Form *form = randomus.makeForm(names[i], "target");
		francis.signForm(*form);
		francis.executeForm(*form);
<<<<<<< HEAD
=======
		delete form;
>>>>>>> 654d3fd6adae5d5d7a2af8631dcf1adc8c9d3806
	}
}