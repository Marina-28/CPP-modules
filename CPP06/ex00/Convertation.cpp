#include "Convertation.hpp"

Convertation::Convertation()
{
    data = "NoData";
    _char = 0;
    _int = 0;
    _double = 0.0;
    _float = 0.0f;
    std::cout << "Convertation default constructor\n";
}

Convertation::Convertation(std::string data)
{
    std::cout << "Convertation args constructor\n";
    _data = data;
    _char = 0;
    _int = 0;
    _double = 0.0;
    _float = 0.0f;
}

Convertation::Convertation(const Convertation & other)
{
    std::cout << "Convertation copy constructor\n";
    _data = other.data;
    _char = other._char;
    _int = other._int;
    _double = other._double;
    _float = other._float;
}

Convertation & Convertation::operator=(const Convertation & other)
{
    std::cout << "Convertation copy assignment operator\n";
    if (this == &other)
        return *this;
    _data = other.data;
    _char = other._char;
    _int = other._int;
    _double = other._double;
    _float = other._float;
    return *this;
}

Convertation::~Convertation()
{
    std::cout << "Convertation destructor\n";
}