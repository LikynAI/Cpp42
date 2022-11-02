#include "Dog.hpp"

Dog::Dog(): Animal()
{
	this->type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal()
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}


Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	this->type = src.type;
	*this->brain = *src.brain;
	return *this;
}

void	Dog::makeSound(void)const
{
	std::cout << this->getType() << " says: **AWW**" << std::endl;
}
