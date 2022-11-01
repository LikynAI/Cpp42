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
	std::string names[] = {"Presidential Pardon Form", "Robotomy Request Form", "Shrubbery Creation Form"};
	int i = 0;

	while (i < 3 && names[i] != form_name)
		i++;
    if (i == 3)
        throw Intern::NoSuchForm();

    return (this->*f[i])(target);
}