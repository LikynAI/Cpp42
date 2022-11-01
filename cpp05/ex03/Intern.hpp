#pragma once
#include <string>
#include <iostream>
class Intern;
# include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
    Intern(/* args */);
    Intern(std::string name, int grade_to_sign, int grade_to_execute);
    Intern(const Intern &src);
    ~Intern();
    
    class NoSuchForm: public std::exception {
		virtual const char* what() const throw();
	};

    Intern &operator=(Intern const &src);
    Form *makePresidentialPardonForm(std::string target);
    Form *makeShrubberyCreationForm(std::string target);
    Form *makeRobotomyRequestForm(std::string target);
    Form *makeForm(std::string form_name, std::string target);
};