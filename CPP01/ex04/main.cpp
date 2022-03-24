# include <iostream>
# include <string>
# include <fstream>

int		ft_check_args(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Too few arguments\n";
		return (1);
	}
	std::string s1 = argv[2];
	if (s1.size() < 1)
	{
		std::cout << "Invalid arguments\n";
		return (1);
	}
	return (0);
}

void	ft_replace(std::string &buf, std::string a, std::string b)
{
	std::size_t pos;

	while ((pos = buf.find(a)) != std::string::npos)
	{
		buf.erase(pos, a.size());
		buf.insert(pos, b);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	std::string	buf;
	std::string	nameFile;
	std::string	nameFileRep;
	std::ifstream fin;
	std::ofstream fout;

	if (ft_check_args(argc, argv) == 1)
		return (1);

	i = 0;
	nameFile = argv[1];
	nameFileRep = nameFile + ".replace";

	fin.open(nameFile);
	if (!fin.is_open())
	{
		std::cout << "outFile opening error\n";
		return (1);
	}

	fout.open(nameFileRep);
	if (!fout.is_open())
	{
		std::cout << "inFile opening error\n";
		fin.close();
		return (1);
	}

	while (!fin.eof())
	{
		if (i != 0)
			fout << "\n";
		std::getline(fin, buf);
		ft_replace(buf, argv[2], argv[3]);
		fout << buf;
		i = 1;
	}
	fout.close();
	fin.close();	
	return (0);
}