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
    bool operator>(Fixed fixed);
    bool operator<(Fixed fixed);
    bool operator>=(Fixed fixed);
    bool operator<=(Fixed fixed);
    bool operator==(Fixed fixed);
    bool operator!=(Fixed fixed);
    Fixed &operator=(const Fixed &a);
    Fixed operator+(Fixed &a);
    Fixed operator-(Fixed &a);
    Fixed operator*(Fixed &a);
    Fixed operator/(Fixed &a);
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

	int getRawBits(void)const;
	void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

Fixed &min(Fixed &a, Fixed &b);
Fixed &max(Fixed &a, Fixed &b);
Fixed &min(const Fixed &a, const Fixed &b);
Fixed &max(const Fixed &a, const Fixed &b);
std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);