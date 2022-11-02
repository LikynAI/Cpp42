#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &src)
{
    (void)(src);
	return (*this);
}

const char* Intern::NoSuchForm::what() const throw()
{
	return "There is no such form!";
}

<<<<<<< HEAD
Form *Intern::makeForm(std::string form_name, std::string target) const
{
    Form *classes[] = { new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
=======
Form *Intern::makePresidentialPardonForm(std::string target)
{
    return new PresidentialPardonForm(target);
}

Form *Intern::makeShrubberyCreationForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string target)
{
    return new RobotomyRequestForm(target);
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
    Form *(Intern::*f[])(std::string target) = {
        &Intern::makePresidentialPardonForm,
        &Intern::makeRobotomyRequestForm,
        &Intern::makeShrubberyCreationForm,
    };
>>>>>>> 654d3fd6adae5d5d7a2af8631dcf1adc8c9d3806
	std::string names[] = {"Presidential Pardon Form", "Robotomy Request Form", "Shrubbery Creation Form"};
	int i = 0;

	while (i < 3 && names[i] != form_name)
		i++;
    if (i == 3)
        throw Intern::NoSuchForm();
<<<<<<< HEAD
    
    Form* ret = classes[i];
    for (int j = 0; j < 3; j++)
        if (j != i)
            delete classes[j];
        
    std::cout << "AMONGUS\n";
	return ret;
=======

    return (this->*f[i])(target);
>>>>>>> 654d3fd6adae5d5d7a2af8631dcf1adc8c9d3806
}