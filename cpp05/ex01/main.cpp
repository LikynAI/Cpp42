#include <iostream>
#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat francis("Francis", 100);
	std::cout << francis << std::endl;

	Form form1("Taxes", 100, 50);
	std::cout << form1 << '\n';
	francis.signForm(form1);
	std::cout << form1 << '\n';
	francis.signForm(form1);
}