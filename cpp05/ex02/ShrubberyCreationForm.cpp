#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("Shrubbery Creation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src):
	Form(src), target(src.target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	(void)src;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->can_execute(executor);
	std::string const shrub = (this->target + "_shrubbery");
	std::ofstream outfile(shrub, std::ios::out);

	outfile << 
	"  o\n" <<
	" ooo\n" <<
	"ooooo\n" <<
	"ooooo\n" <<
	" ooo\n" <<
	"  |\n" << 
	'\n';
<<<<<<< HEAD
=======
	std::cout << executor.getName() << " created a tree\n";
>>>>>>> 654d3fd6adae5d5d7a2af8631dcf1adc8c9d3806
}