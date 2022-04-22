#include "Convertation.hpp"

Convertation::Convertation()
{
    std::cout << "Convertation default constructor\n";
    _data = "NoData";
    _type = "NoType";
    _char = 0;
    _int = 0;
    _double = 0.0;
    _float = 0.0f;
    _isPos = false;
    _isIntPos = false;
}

Convertation::Convertation(std::string data)
{
    std::cout << "Convertation args constructor\n";
    _data = data;
    _type = "NoType";
    _char = 0;
    _int = 0;
    _double = 0.0;
    _float = 0.0f;
    // _isPos = false;
    // _isIntPos = false;
}

Convertation::Convertation(const Convertation & other)
{
    std::cout << "Convertation copy constructor\n";
    _data = other._data;
    _type = other._type;
    _char = other._char;
    _int = other._int;
    _double = other._double;
    _float = other._float;
    // _isPos = other._isPos;
    // _isIntPos = other._isIntPos;
}

Convertation & Convertation::operator=(const Convertation & other)
{
    std::cout << "Convertation copy assignment operator\n";
    if (this == &other)
        return *this;
    _data = other._data;
    _type = other._type;
    _char = other._char;
    _int = other._int;
    _double = other._double;
    _float = other._float;
    // _isPos = other._isPos;
    // _isIntPos = other._isIntPos;
    return *this;
}

Convertation::~Convertation()
{
    std::cout << "Convertation destructor\n";
}

/************************************************************************/

void Convertation::defType()
{
    size_t len = _data.length();
    if (_data.compare == "nan" || _data == "-inf" || _data == "+inf" || _data == "inf")
        _type = "double";
    else if (_data == "nanf" || _data == "-inff" || _data == "+inff" _data == "inff")
        _type = "float";
    else if (len == 1)
    {
        if (isdigit(_data[0]) == 0)
            _type == "char";
        else
            _type == "int";
    }
    else
    {
        int point = 0;
        bool isPos = true;
        size_t i = 0;
        while (i < len - 1)
        {
            if (isdigit(_data[i]) == 0)
            {
                if (_data[i] != '.')
                {
                    isPos = false;
                    break;
                }
                point++;
                if (point > 1)
                {
                    isPos = false;
                    break;
                }
            }
            i++;
        }
        if (isPos == true)  
        {
            if (isdigit(_data[i]) != 0 && point == 1)
                _type = "double";
            else if (isdigit(_data[i]) != 0 && point == 0)
                _type = "int";
            else if (_data[i] == 'f' && _data[i - 1] != '.')
                _type =="float";
        }  
    }
}

// void Convertation::convert()
// {
//     if (_type)
// }
// void Convertation::toChar()
// {
//     if (_type == "char")
//         _char = _data[0];
//     else
//     {

//     }
// }
