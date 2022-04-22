#include "Convertation.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Enter one arguments\n";
        return 1;
    }
    std::string data = argv[1];
    double a = std::stod(argv[1]);
    float b = std::stof(argv[1]);
    std::cout << "double " << a << "\n";
    std::cout << "float " << b << "\n";
    if (data == "nan")
        std::cout << "yes\n";
    else
        std::cout << "No\n";
}