# include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl exmp;

    std::string cmd;

    if (argc != 2)
    {
        std::cout << "I need one argument\n\n";
        return (1);
    }
    cmd = argv[1];
    exmp.complain(cmd);
    return (0);
}