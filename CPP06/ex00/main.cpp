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
    // float b = .2f;
    // double c = 0.;
    // double d = 3.8 + c;

    std::string data = argv[1];
    //double a = std::stod(argv[1]);
    // float b = std::stof(argv[1]);
    //std::cout << "double " << a << "\n";
    // std::cout << "float " << b << "\n";
    // if (data == "nan")
    //     std::cout << "yes\n";
    // else
    //     std::cout << "No\n";
    // long temp = std::stoi(data);
    //     std::cout << temp << "\n";
    // int _int;
    // char _char;
    // double _double;
    // float _float;
    // try
    // {
    //     _double = std::stod(data);
    //     std::cout << "double: " <<_double << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout << "double: impossible\n";
    // }
    // _int = static_cast<int>(_double);
    // std::cout << "int: " <<_int << std::endl;

    // try
    // {
    //     _float = std::stod(data);
    //     std::cout << "float: " <<_float << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cout << "float: impossible\n";
    // }
    // _char = static_cast<char>(_int);
    // _double = static_cast<double>(_int);
    // std::cout << "int: " << _int << std::endl;
    // std::cout << "char: '" << _char << "'\n";
    // std::cout << "double: " <<_double << std::endl;
    // std::cout << "double1: " << std::stod(data) << std::endl;

}