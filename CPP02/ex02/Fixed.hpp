#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int	fix_point;
    static const int bit = 8;
public:
    Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &other);
	Fixed & operator = (const Fixed &other);

	bool operator < (const Fixed &other);
	bool operator > (const Fixed &other);
	bool operator >= (const Fixed &other);
	bool operator <= (const Fixed &other);
	bool operator == (const Fixed &other);
	bool operator != (const Fixed &other);

	Fixed operator +(const Fixed &other);
	Fixed operator -(const Fixed &other);
	Fixed operator *(const Fixed &other);
	Fixed operator /(const Fixed &other);

	Fixed & operator ++();
	Fixed operator ++(int value);
	Fixed & operator --();
	Fixed operator --(int value);


    ~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &one, Fixed &two);
	static const Fixed &min(const Fixed &one, const Fixed &two);
	static Fixed &max(Fixed &one, Fixed &two);
	static const Fixed &max(const Fixed &one, const Fixed &two);


};

std::ostream	&operator<<(std::ostream &os, const Fixed &other);

#endif