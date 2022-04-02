#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    /* data */
public:
    ClapTrap();
    ClapTrap(const ClapTrap & other);
	ClapTrap & operator=(const ClapTrap & other);
    ~ClapTrap();
};

ClapTrap::ClapTrap(/* args */)
{
}

ClapTrap::~ClapTrap()
{
}


#endif