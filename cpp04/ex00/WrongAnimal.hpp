#pragma once
#include <iostream>
#include <string>

class WrongAnimal
{
protected:
	std::string type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal &operator=(const WrongAnimal &src);
    virtual void makeSound(void)const;
    virtual ~WrongAnimal();
    std::string getType(void)const;
};
