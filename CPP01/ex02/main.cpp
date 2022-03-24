#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Address:\n";
	std::cout << "string\t\t" << &str << "\n";
	std::cout << "stringPTR\t" << stringPTR << "\n";
	std::cout << "stringREF\t" << &stringREF << "\n\n";
	
	std::cout << "Values:\n";
	std::cout << "string\t\t" << str << "\n";
	std::cout << "stringPTR\t" << *stringPTR << "\n";
	std::cout << "stringREF\t" << stringREF << "\n";
}