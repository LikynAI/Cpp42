#pragma once
#include <iostream>

class Fixed
{
private:
    int value;
    static const int f_bits = 8;
public:
    Fixed();
    Fixed(int i);
    Fixed(float f);
    Fixed(const Fixed &f);
    ~Fixed();
    
    Fixed & operator = (const Fixed &a);
    
	int getRawBits(void)const;
	void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);