#include "ScavTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b(a);
    ClapTrap c("Bob");
    ClapTrap d;
    d = c;
    a.attack("Bob");
    a.takeDamage(10);
    a.beRepaired(5);
    a.getInfo();
    b.getInfo();
    c.getInfo();
    d.getInfo();
    return (0);
}