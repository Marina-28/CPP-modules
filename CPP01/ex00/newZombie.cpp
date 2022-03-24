#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    std::cout << "Function newZombie\n";
    Zombie  *newZombie;
    newZombie = new Zombie(name);
    return (newZombie);
}