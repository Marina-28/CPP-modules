#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*hordeZombie;

    if (N < 0 || N > 2147483647)
	{
		std::cout << "Invalid argument N";
		return (NULL);
	}
	hordeZombie = new Zombie[N];
	if (hordeZombie == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
		hordeZombie[i].setName(name + "_" + std::to_string(i));
	return (hordeZombie);
}