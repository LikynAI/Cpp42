#include "Array.hpp"
#include <iostream>

int main()
{
    Array<int> a(10);
    
    a[0] = 1;
    a[2] = 3;

    for (int i = 0; i < 10; i++)
        std::cout << a[i];
}