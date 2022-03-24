#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
public:
	Contact();
	~Contact();
	void	Set(std::string	_first_name,
			std::string	_last_name,
			std::string	_nickname,
			std::string	_phone_number,
			std::string	_darkest_secret);
	void	print_table(int id);
	void	print();
};

#endif