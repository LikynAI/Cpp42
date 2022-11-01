#pragma once
#include <string>
#include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:
    Bureaucrat(/* args */);
    Bureaucrat(const Bureaucrat& src);
    Bureaucrat(std::string const &name, int grade);
    ~Bureaucrat();
    
    Bureaucrat &operator=(const Bureaucrat &src);
    void operator++();
    void operator--();

    class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

    const std::string getName() const;    
    int getGrade() const;

    void executeForm(Form &f);
    void signForm(Form &f);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);
