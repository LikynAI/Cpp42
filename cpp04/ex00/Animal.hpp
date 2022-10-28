#pragma once
#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;
public:
    Animal(/* args */);
    Animal(const Animal &src);
    Animal &operator=(const Animal &src);
    virtual void makeSound(void)const;
    virtual ~Animal();
    std::string getType(void)const;
};
