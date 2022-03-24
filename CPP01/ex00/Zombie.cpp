#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "NoName";
	std::cout << "Zombie is created\n";
};

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "Zombie is created\n";
};

Zombie::~Zombie()
{
	std::cout << name << " is destroyed\n";
};

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

