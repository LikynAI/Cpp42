#include "Fixed.hpp"
#include <iostream>
int main( void ) {

const Fixed one(1);
const Fixed two(2);
Fixed a;
Fixed b( 10 );
Fixed c( 42.42f );
Fixed d( b );
a = Fixed( 1234.4321f );
std::cout << "5 / 2 is " << Fixed(5)/Fixed(2) << std::endl;

std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "a + b is " << a + b << std::endl;
std::cout << "b * c is " << b * c << std::endl;
std::cout << "c / b is " << c / b << std::endl;
std::cout << "c++ is " << c++ << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "++c is " << ++c << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "b = b - c" << std::endl;
b = b - c;
int i = 1000;
b  = b * one;
while (i -- > 0)
{
    b = b * 2;
    b = b / two;
}

std::cout << "b is " << b << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "max(b,d)" << max(b,d) << std::endl;

std::cout << "max(1,2)" << max(one,two) << std::endl;
std::cout << "a + one is " << a + one << std::endl;
std::cout << "one + a is " << one + a << std::endl;
std::cout << "one + two is " << two + one << std::endl;
std::cout << "b * 0 is " << b * Fixed(0) << std::endl;//
//std::cout << "b / 2 is " << b / e << std::endl;//

b = a + one;
b++;


return 0;
}