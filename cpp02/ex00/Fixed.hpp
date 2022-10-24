#pragma once

class Fixed
{
private:
    int value;
    static const int f_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &f);
    ~Fixed();
    Fixed & operator = (const Fixed &a);
	int getRawBits(void)const;
	void setRawBits(int const raw);
};
