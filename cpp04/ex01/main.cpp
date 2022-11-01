#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
Dog* j = new Dog();
j->setIdea(0,"Трава - вкусно");
Dog i(*j);
std::cout << '\n' << j->getIdea(0) << '\n' << '\n';
delete(j);
std::cout << '\n' << i.getIdea(0) << '\n' << '\n';
return 0;
}