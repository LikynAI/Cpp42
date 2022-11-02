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
<<<<<<< HEAD

    Form *makeForm(std::string form_name, std::string target) const;
=======
    Form *makePresidentialPardonForm(std::string target);
    Form *makeShrubberyCreationForm(std::string target);
    Form *makeRobotomyRequestForm(std::string target);
    Form *makeForm(std::string form_name, std::string target);
>>>>>>> 654d3fd6adae5d5d7a2af8631dcf1adc8c9d3806
};