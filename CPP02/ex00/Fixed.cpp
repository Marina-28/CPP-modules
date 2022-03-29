#include "Fixed.hpp"

int const Fixed::bit = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fix_point = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called\n";
    this->fix_point = other.getRawBits();
}

Fixed & Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called\n";
    this->fix_point = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
	this->fix_point = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
	return (this->fix_point);
}