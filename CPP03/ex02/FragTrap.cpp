#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
    std::cout << "FragTrap default constructor called\n";
    _name = "FragTrap";
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor with name called\n";
    _name = name;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
}

FragTrap::FragTrap(const FragTrap & other)
{
    std::cout << "FragTrap copy constructor called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

FragTrap & FragTrap::operator=(const FragTrap & other)
{
    std::cout << "FragTrap copy assignment operator called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

/************************************************************************/

void FragTrap::highFivesGuys()
{
    std::cout << "High five, bro\n";
}