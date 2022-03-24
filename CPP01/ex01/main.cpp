#include "Zombie.hpp"

int main()
{
	Zombie	*horde;

	horde = zombieHorde(4, "Misha");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < 4; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}