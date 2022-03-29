#include "Fixed.hpp"

Fixed::Fixed()
{
    //std::cout << "Default constructor called\n";
    this->fix_point = 0;
}

Fixed::Fixed(const int value)
{
    //std::cout << "Int constructor called\n";
    this->fix_point = value * (1 << this->bit);
}

Fixed::Fixed(const float value)
{
    //std::cout << "Float constructor called\n";
    this->fix_point = (int)roundf(value * (1 << this->bit));
}

Fixed::Fixed(const Fixed &other)
{
    //std::cout << "Copy constructor called\n";
    this->fix_point = other.getRawBits();
}

Fixed & Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called\n";
    this->fix_point = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called\n";
}

void Fixed::setRawBits(int const raw)
{
	this->fix_point = raw;
}

int Fixed::getRawBits() const
{
	return this->fix_point;
}

float Fixed::toFloat() const
{
    return (float)fix_point / (float)(1 << bit);
}

int Fixed::toInt() const
{
    return fix_point / (1 << bit);
}

bool Fixed::operator<(const Fixed &other)
{
    return this->fix_point < other.fix_point;
}

bool Fixed::operator>(const Fixed &other)
{
    return this->fix_point > other.fix_point;
}

bool Fixed::operator<=(const Fixed &other)
{
    return this->fix_point <= other.fix_point;
}

bool Fixed::operator>=(const Fixed &other)
{
    return this->fix_point >= other.fix_point;
}

bool Fixed::operator==(const Fixed &other)
{
    return this->fix_point == other.fix_point;
}

bool Fixed::operator!=(const Fixed &other)
{
    return this->fix_point != other.fix_point;
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed temp;
    temp.fix_point = this->fix_point + other.fix_point;
    return temp;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed temp;
    temp.fix_point = this->fix_point - other.fix_point;
    return temp;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed temp;
    temp.fix_point = (this->fix_point * other.fix_point) / (1 << bit);
    return temp;
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed temp;
    temp.fix_point = (this->fix_point / other.fix_point) * (1 << bit);
    return temp;
}

Fixed & Fixed::operator++()
{
    this->fix_point = this->fix_point + 1;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->fix_point = this->fix_point + 1;
    return temp;
}

Fixed & Fixed::operator--()
{
    this->fix_point = this->fix_point - 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->fix_point = this->fix_point - 1;
    return temp;
}

Fixed & Fixed::min(Fixed &one, Fixed &two)
{
    if (one > two)
        return two;
    else
        return one;
}

Fixed & Fixed::max(Fixed &one, Fixed &two)
{
    if (one < two)
        return two;
    else
        return one;
}

const Fixed & Fixed::min(const Fixed &one, const Fixed &two)
{
    if (one.getRawBits() > two.getRawBits())
        return two;
    else
        return one;
}

const Fixed & Fixed::max(const Fixed &one, const Fixed &two)
{
    if (one.getRawBits() < two.getRawBits())
        return two;
    else
        return one;
}

std::ostream &operator<<(std::ostream &os, const Fixed &other)
{
    os << other.toFloat();
    return os;
}