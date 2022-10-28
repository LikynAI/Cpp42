#pragma once
#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;
	Brain *brain;
public:
    Animal(/* args */);
    Animal(const Animal &src);
    Animal &operator=(const Animal &src);
    virtual void makeSound(void)const = 0;
    virtual ~Animal();
    std::string getType(void)const;
    const std::string	getIdea(size_t i)const;
    void setIdea(size_t i, std::string idea);
};
