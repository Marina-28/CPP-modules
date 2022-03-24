#include "Zombie.hpp"

int main()
{
	Zombie	Nick("Nick");
	Nick.announce();
	std::cout << "\n";

	Zombie	*Lesha;
	Lesha = newZombie("Lesha");
	Lesha->announce();
	delete Lesha;
	std::cout << "\n";

	randomChump("Misha");
}






