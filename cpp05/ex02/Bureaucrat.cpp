#include "Bureaucrat.hpp"

#pragma region constr
Bureaucrat::Bureaucrat(std::string const &name, int grade):
	name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src):
	name(src.name), grade(src.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}
#pragma endregion

#pragma region exeptions
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}
#pragma endregion

#pragma region operators
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	this->grade = src.grade;
	return (*this);
}

void Bureaucrat::operator++()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::operator--()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat " << bureaucrat.getName() << " (Grade " << bureaucrat.getGrade() << ")";
	return (out);
}
#pragma endregion

#pragma region getters
const std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}
#pragma endregion

#pragma region functions
void Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch (Form::FormAlreadySignedException e)
	{
		std::cout << this->name << " couldn’t sign " << f.getName() << " because form is already signed\n";
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << this->name << " couldn’t sign " << f.getName() << " because his grade is too low\n";
	}
}

void Bureaucrat::executeForm(Form &f)
{
	try
	{
		f.execute(*this);
	}
	catch (Form::FormNotSignedException e)
	{
		std::cout << this->name << " couldn’t execute " << f.getName() << " because form is not signed\n";
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << this->name << " couldn’t execute " << f.getName() << " because his grade is too low\n";
	}
}
#pragma endregion
