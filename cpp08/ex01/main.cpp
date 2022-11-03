#include "Span.hpp"
#include <iostream>

int main()
{
Span sp(10);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;

for (size_t i = 0; i < 5; i++)
{
    std::cout << ' ' << sp[i];
}
std::cout << '\n';

int arr[] = {1,2,3,4,5,6,7,8};
sp.addRange(arr,arr+5);

for (size_t i = 0; i < 10; i++)
{
    std::cout << ' ' << sp[i];
}
std::cout << '\n';

return 0;
}