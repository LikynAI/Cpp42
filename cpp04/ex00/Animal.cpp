#include "Animal.hpp"

Animal::Animal():type("default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->type = src.type;
	return *this;
}

void Animal::makeSound(void)const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

std::string	Animal::getType(void)const
{
	return (this->type);
}
