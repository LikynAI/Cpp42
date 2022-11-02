#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("default")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->type = src.type;
	return *this;
}

void WrongAnimal::makeSound(void)const
{
	std::cout << "This WrongAnimal doesn't make any sound." << std::endl;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->type);
}
