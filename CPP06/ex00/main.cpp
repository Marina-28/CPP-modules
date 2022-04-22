#include "Convertation.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Enter one arguments\n";
        return 1;
    }
    Convertation a(argv[1]);
    a.convert();
    return 0;
}