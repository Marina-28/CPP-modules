#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Gosha");
    ScavTrap b;
    ClapTrap c;


    b.attack("Misha");
    b.takeDamage(10);
    b.beRepaired(5);
    b.getInfo();

    c.attack("Gosha");

    a.attack("Zhenya");
}