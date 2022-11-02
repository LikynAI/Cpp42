#include "funcs.hpp"
#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    
    swap(a, b);
    std::cout << a << ' ' << b << '\n';

    std::cout << max(a, b) << '\n';
    std::cout << min(a, b) << '\n';
        
}