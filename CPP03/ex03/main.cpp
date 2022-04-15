#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a;

    a.attack("Gosha");
    a.highFivesGuys();
    a.getInfo();

    ScavTrap b;

    b.attack("Misha");
    b.getInfo();

    ClapTrap c;

    c.attack("Zhenya");
    c.getInfo();
}