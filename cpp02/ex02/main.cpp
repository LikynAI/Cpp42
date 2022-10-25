#include "Fixed.hpp"
#include <iostream>
int main( void ) {
Fixed a;
Fixed b( 10 );
Fixed c( 42.42f );
Fixed d( b );
a = Fixed( 1234.4321f );
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
std::cout << "b is " << b << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "max(b,d)" << max(b,d) << std::endl;
const Fixed one(1);
const Fixed two(2);
std::cout << "max(1,2)" << max(one,two) << std::endl;

return 0;
}