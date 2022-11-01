#pragma once
#include <string>
#include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
private:
    const std::string name;
    bool is_signed;
    const int grade_to_sign;
    const int grade_to_execute;
public:
    Form(/* args */);
    Form(std::string name, int grade_to_sign, int grade_to_execute);
    Form(const Form &src);
    virtual ~Form();

    Form &operator=(Form const &src);

    class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	class FormAlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};
    class FormNotSignedException: public std::exception {
		virtual const char* what() const throw();
	};

    const std::string getName() const;
    int get_grade_to_sign() const;
    int get_grade_to_execute() const;
    int get_signed() const;

    virtual void execute(const Bureaucrat &b) const = 0;
    void can_execute(const Bureaucrat &b) const;
    void beSigned(const Bureaucrat &b);
};

std::ostream &operator<<(std::ostream &out, Form const &form);
