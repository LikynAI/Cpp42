#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	this->value = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &src)
{
    this->value = src.getRawBits();
    return *this;
}

int	Fixed::getRawBits(void)const
{
	return (this->value);
}

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

Fixed::~Fixed()
{
}