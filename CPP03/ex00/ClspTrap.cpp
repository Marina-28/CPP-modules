#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called\n";
    _name = "ClapTrap";
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor with name called\n";
    _name = name;
    _hit_points = 10;
    _energy_points = 10;
    _attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap & other)
{
    std::cout << "Copy constructor called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
    std::cout << "Copy assignment operator called\n";
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called\n";
}