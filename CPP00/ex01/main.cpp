#include "PhoneBook.hpp"


int	main()
{
	PhoneBook	PhoneBook;
	std::string	input;

	PhoneBook.man();
	while (!std::cin.eof())
	{
		std::cout << "Input your command:\n";
		std::getline(std::cin, input);
		if (input == "ADD")
			PhoneBook.add();
		else if (input == "SEARCH")
			PhoneBook.search();
		else if (input == "EXIT")
			return (0);
		else if (std::cin.eof())
			return (0);
		else
		{
			std::cout << "Wrong command" << std::endl;
			PhoneBook.man();
		}
	}
	return (0);
}