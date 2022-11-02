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

Form *Intern::makeForm(std::string form_name, std::string target) const
{
    Form *classes[] = { new PresidentialPardonForm(target), new RobotomyRequestForm(target), new ShrubberyCreationForm(target)};
	std::string names[] = {"Presidential Pardon Form", "Robotomy Request Form", "Shrubbery Creation Form"};
	int i = 0;

	while (i < 3 && names[i] != form_name)
		i++;
    if (i == 3)
        throw Intern::NoSuchForm();
    
    Form* ret = classes[i];
    for (int j = 0; j < 3; j++)
        if (j != i)
            delete classes[j];
        
    std::cout << "AMONGUS\n";
	return ret;
}