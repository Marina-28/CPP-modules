#include "Zombie.hpp"

void randomChump(std::string name)
{
    std::cout << "Function randomChump\n";
    Zombie newZombie(name);
    newZombie.announce();
}