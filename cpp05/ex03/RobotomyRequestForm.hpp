#pragma once
#include <string>
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();

	std::string const target;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm();


	RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

	void execute(Bureaucrat const &executor) const;
};