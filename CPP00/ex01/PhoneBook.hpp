#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook
{
private:
    Contact _contact[8];
	int		_id;
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	void	man();
};

#endif