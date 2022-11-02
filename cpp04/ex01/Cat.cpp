#include "Cat.hpp"

Cat::Cat(): Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal()
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &src)
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->type = src.type;
	*this->brain = *src.brain;
	return *this;
}

void	Cat::makeSound(void)const
{
	std::cout << this->getType() << " says: **Meeeoow**" << std::endl;
}
