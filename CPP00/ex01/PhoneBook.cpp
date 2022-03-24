#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_id = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Phone Book is deleted\n";
}

void	PhoneBook::add()
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "Please fill all fields\n";
	std::cout << "First name:	";
	std::getline(std::cin, first_name);
	std::cout << "Last name:	";
	std::getline(std::cin, last_name);
	std::cout << "Nickname:	";
	std::getline(std::cin, nickname);
	std::cout << "Phone number:	";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest secret:	";
	std::getline(std::cin, darkest_secret);
	_contact[_id % 8].Set(first_name, last_name, nickname,
						phone_number, darkest_secret);
	_id++;
}

void	PhoneBook::search()
{
	int	i;

	i = 0;
	if (_id == 0)
		std::cout << "Phone Book is empty\n";
	else
	{
		std::cout << "*********************************************\n";
		std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
		std::cout << "*********************************************\n";
		while (i < _id && i < 8)
		{
			_contact[i].print_table(i);
			i++;
		}
		std::cout << "*********************************************\n\n";
		std::cout << "Write index for show contact or other to quit\n";

		std::string input_id;
		std::getline(std::cin, input_id);
		if (input_id.size() == 1 && input_id[0] - 48 > 0 && input_id[0] - 48 < 9)
			_contact[input_id[0] - 48 - 1].print();
	}
}

void	PhoneBook::man()
{
	std::cout << "This is phone book =)\nYou can use commands:\n";
	std::cout << "\"ADD\" - adding a contact\n\"SEARCH\" - output contacts\n\"EXIT\" - delete all contacts and exit\n";
}
