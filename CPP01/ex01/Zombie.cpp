#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "NoName";
	std::cout << name << " is created\n";
};

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << name << " is created\n";
};

Zombie::~Zombie()
{
	std::cout << name << " is destroyed\n";
};

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
	std::cout << "Function setName\n";
	this->name = name;
}
