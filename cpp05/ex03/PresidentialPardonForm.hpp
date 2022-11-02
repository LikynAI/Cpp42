#pragma once
#include <string>
#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();

	std::string const target;
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm();


	PresidentialPardonForm &operator=(PresidentialPardonForm const &src);

	void execute(Bureaucrat const &executor) const;
};