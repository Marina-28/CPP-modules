#include "Contact.hpp"

Contact::Contact()
{

};

Contact::~Contact()
{

};

void	Contact::Set(std::string _first_name, std::string	_last_name, std::string	_nickname,
			std::string	_phone_number, std::string	_darkest_secret)
{
	first_name = _first_name;
	last_name = _last_name;
	nickname = _nickname;
	phone_number = _phone_number;
	darkest_secret = _darkest_secret;
}

void	Contact::print_table(int id)
{
	std::cout << "|" << std::setfill(' ') << std::setw(10) << id + 1 << "|";
	if (first_name.size() <= 10)
		std::cout << std::setw(10) << first_name << "|";
	else
		std::cout << first_name.substr(0, 9) << ".|";
	if (last_name.size() <= 10)
		std::cout << std::setw(10) << last_name << "|";
	else
		std::cout << last_name.substr(0, 9) << ".|";
	if (nickname.size() <= 10)
		std::cout << std::setw(10) << nickname << "|";
	else
		std::cout << nickname.substr(0, 9) << ".|";
	std::cout << "\n";
}

void	Contact::print()
{
	int	len;

	std::string	_first_name = "First name: " + first_name;
	std::string	_last_name = "Last name: " + last_name;
	std::string	_nickname = "Nickname: " + nickname;
	std::string	_phone_number = "Phone number: " + phone_number;
	std::string	_darkest_secret = "Darkest secret: " + darkest_secret;

	len = (int)_first_name.size();
	if (len < (int)_last_name.size())
		len = (int)_last_name.size();
	if (len < (int)_nickname.size())
		len = (int)_nickname.size();
	if (len < (int)_phone_number.size())
		len = (int)_phone_number.size();
	if (len < (int)_darkest_secret.size())
		len = (int)_darkest_secret.size();
	std::cout << std::setfill ('*') << std::setw (len + 5) << "\n";
	std::cout << "|" << std::setfill (' ') << std::setw(len + 2) << _first_name << "|\n";
	std::cout << "|" << std::setfill (' ') << std::setw(len + 2) << _last_name << "|\n";
	std::cout << "|" << std::setfill (' ') << std::setw(len + 2) << _nickname << "|\n";
	std::cout << "|" << std::setfill (' ') << std::setw(len + 2) << _phone_number << "|\n";
	std::cout << "|" << std::setfill (' ') << std::setw(len + 2) << _darkest_secret << "|\n";
	std::cout << std::setfill ('*') << std::setw (len + 5) << "\n";
}