#include <iostream>
#include "Classes.hpp"


void identify_ptr(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << '\n';
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << '\n';
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << '\n';
}

void identify(Base& p)
{
    identify_ptr(&p);
}

int main()
{   
    Base *a = new A();
    Base *b = new B();
    Base *c = new C();
    
    identify_ptr(a);
    identify_ptr(b);
    identify_ptr(c);

    identify(*a);
    identify(*b);
    identify(*c);
    
    return 0;
}
