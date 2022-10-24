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
return 0;
}