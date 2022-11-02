#include "Form.hpp"

#pragma region constructors
Form::Form(std::string const name, int const grade_to_sign, int const grade_to_execute):
	name(name), is_signed(false), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src):
	name(src.name), is_signed(src.is_signed), grade_to_sign(src.grade_to_sign), grade_to_execute(src.grade_to_execute)
{
	if (grade_to_sign < 1 || grade_to_execute < 1)
		throw Form::GradeTooHighException();
	else if (grade_to_sign > 150 || grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}
#pragma endregion

#pragma region exeptions
const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: Grade too Low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "FormException: The Form is already signed";
}

const char* Form::FormNotSignedException::what() const throw()
{
	return "FormException: The Form has not been signed";
}
#pragma endregion

#pragma region operators
Form &Form::operator=(Form const &src)
{
	this->is_signed = src.is_signed;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
    out << "Form:             " << form.getName() <<  "\n";
    out << "grade to sign:    " << form.get_grade_to_sign() <<  "\n";
    out << "grade to execute: " << form.get_grade_to_execute() <<  "\n";
    out << "signed:           " << form.get_signed() <<  "\n";
    return out;
}

#pragma endregion

#pragma region getters
const std::string Form::getName() const
{
    return this->name;
}

int Form::get_grade_to_sign() const
{
    return this->grade_to_sign;
}

int Form::get_grade_to_execute() const
{
    return this->grade_to_execute;
}

int Form::get_signed() const
{
    return this->is_signed;
}
#pragma endregion

#pragma region functions
void Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() > this->grade_to_sign)
		throw Form::GradeTooLowException();
	else if (this->is_signed)
		throw Form::FormAlreadySignedException();
	this->is_signed = true;
    std::cout <<  b.getName() << " signed " << this->name << '\n';
}

void Form::can_execute(const Bureaucrat &b) const
{
	if (b.getGrade() > this->grade_to_execute)
		throw Form::GradeTooLowException();
	else if (!this->is_signed)
		throw Form::FormNotSignedException();
}
#pragma endregion
