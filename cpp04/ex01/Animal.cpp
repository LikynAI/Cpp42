#include "Animal.hpp"

// Constructors
Animal::Animal():type("default")
{
	std::cout << "Animal Default Constructor called" << std::endl;
	this->brain = new Brain();
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
	delete brain;
}

// Overloaded Operators
Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if (this == &src)
		return *this;

	*this->brain = *src.brain;
	this->type = src.type;
	return *this;
}

// Public Methods
void Animal::makeSound(void)const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

// Getter
std::string	Animal::getType(void)const
{
	return (this->type);
}

const std::string	Animal::getIdea(size_t i)const
{
	return (brain->getIdea(i));
}

void Animal::setIdea(size_t i, std::string idea)
{
	brain->setIdea(i, idea);
}