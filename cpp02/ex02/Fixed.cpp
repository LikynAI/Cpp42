#include "Fixed.hpp"


Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	this->value = copy.getRawBits();
}

Fixed::Fixed(int i)
{
	this->value = i << this->f_bits;
}

Fixed::Fixed(float f)
{
	this->value = (int)(f * (1 << this->f_bits));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &src)
{
    this->value = src.getRawBits();
    return *this;
}

bool	Fixed::operator>(Fixed fixed)const 
{
	return (this->value > fixed.value);
}

bool	Fixed::operator<(Fixed fixed)const 
{
	return (this->value < fixed.value);
}

bool	Fixed::operator>=(Fixed fixed)const 
{
	return (this->value >= fixed.value);
}

bool	Fixed::operator<=(Fixed fixed)const 
{
	return (this->value <= fixed.value);
}

bool	Fixed::operator==(Fixed fixed)const 
{
	return (this->value == fixed.value);
}

bool	Fixed::operator!=(Fixed fixed)const 
{
	return (this->value != fixed.value);
}

Fixed Fixed::operator+(const Fixed &a) const
{
	Fixed ans = Fixed();
	ans.setRawBits(value + a.getRawBits());
	return ans;
}

Fixed Fixed::operator-(const Fixed &a)const 
{
	Fixed ans = Fixed();
	ans.setRawBits(value - a.getRawBits());
	return ans;
}

Fixed Fixed::operator*(const Fixed &a)const 
{
	Fixed ans = Fixed();
	ans.setRawBits((value * a.getRawBits()) >> f_bits);
	return ans;
}

Fixed Fixed::operator/(const Fixed &a)const 
{
	Fixed ans = Fixed();
	ans.setRawBits(((value<<f_bits) / (a.getRawBits())));
	return ans;
}

Fixed	&Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->value;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->value;
	return (tmp);
}

int	Fixed::getRawBits(void)const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void)const
{
	return ((float)this->value / (float)(1 << this->f_bits));
}

int	Fixed::toInt(void)const
{
	return (this->value >> this->f_bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed &min(Fixed &a, Fixed &b)
{
	if (a < b)
		return a;
	return b;
}

Fixed &max(Fixed &a, Fixed &b)
{
	if (a > b)
		return a;
	return b;
}
const Fixed &min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}
const Fixed &max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}