#include <iostream>

class Animal
{
private:
    /* data */
public:
    Animal(/* args */);
    Animal(const Animal &src);
    Animal &operator=(const Animal &src);
    ~Animal();
};

Animal::Animal(/* args */)
{

}

Animal::~Animal()
{
}
