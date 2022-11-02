#include <iostream>
#include <vector>
#include "easyfind.hpp"
#include <algorithm>

int main ()
{
    std::vector<int> v(10);
    v[0]=10;
    v[1]=20;
    v[2]=30;
    
    std::cout << easyfind(v, 30)[0] << '\n';
    if (easyfind(v, 40) == v.end())
        std::cout << "its at the end\n";
}
