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
    if (_data == "nan" || _data == "-inf" || _data == "+inf" || _data == "inf")
        _type = "double";
    else if (_data == "nanf" || _data == "-inff" || _data == "+inff" || _data == "inff")
        _type = "float";
    else if (len == 1)
    {
        if (isdigit(_data[0]) == 0)
            _type = "char";
        else
            _type = "int";
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
            else if (_data[i] == 'f' && point > 0 && (isdigit(_data[i - 1]) != 0 \
            || isdigit(_data[0]) != 0))
                _type = "float";
            else if (_data[i] == '.' && isdigit(_data[0]) != 0)
                _type = "double";
        }  
    }
}

void Convertation::toCharFromInt()
{
    if (_int >= 0 && _int <= 127)
    {
        if (_int >= 32 && _int < 127)
        {
            _char = static_cast<char>(_int);
            std::cout << "char: '" << _char << "'\n";
        }
        else
        std::cout << "char: Non displayable\n";
    }
    else
        std::cout << "char: impossible\n";
}

void Convertation::fromChar()
{
    _char = _data[0];
    std::cout << "char: " << _char << std::endl;
    _int = static_cast<int>(_char);
    std::cout << "int: " << _int << std::endl;
    _float = static_cast<float>(_char);
    std::cout << "float: " << _float << ".0f\n";
    _double = static_cast<double>(_char);
    std::cout << "double: " << _double << ".0\n";
}

// void Convertation::fromInt()
// {
//     try
//     {
//         _int = std::stoi(_data);
//         toCharfromInt();
//         _float = static_cast<float>(_int);
//         _double = static_cast<double>(_int);
//         std::cout << "int: " << _int << std::endl;
//         std::cout << "float: " << _float << ".0f\n";
//         std::cout << "double: " << _double << ".0\n";
//     }
//     catch(const std::exception& e)
//     {
//         std::cout << "char: impossible\n";
//         std::cout << "int: impossible\n";
//         try
//         {
//             _double = std::stod(_data);
//             _float = static_cast<float>(_double);
//             std::cout << "float: " << _float;
//             if (std::isinf(_float) || std::isnan(_float))
//                 std::cout << "f\n";
//             else
//                 std::cout << ".0f\n";
//             std::cout << "double: " << _double;
//             if (std::isinf(_double) || std::isnan(_double))
//                 std::cout << "\n";
//             else
//                 std::cout << ".0\n";
//         }
//         catch(const std::exception& e)
//         {
//             std::cout << "float: impossible\n";
//             std::cout << "double: impossible\n";
//         }
//     }
// }

void Convertation::toIntFromDouble()
{
    if (std::isnan(_double) || std::isinf(_double) || \
    (_double > 0 && _double - 2147483647 > 0) \
    || (_double < 0 && _double + 2147483648 < 0))
    {
        std::cout << "char: impossible\n";
        std::cout << "int: impossible\n";
    }
    else
    {
        _int = static_cast<int>(_double);
        toCharFromInt();
        std::cout << "int: " << _int << std::endl;
    }
}

void Convertation::printDoubleFloat()
{
    //std::cout << std::to_string(_double).find('e');
    std::cout << "float: " << _float;
    if (std::isinf(_float) || std::isnan(_float))
        std::cout << "f\n";

    /*...*/
    
    else if (std::to_string(_float).length() > 6)
        std::cout << "f\n";
    else 
        std::cout << ".0f\n";

    std::cout << "double: " << _double;
    if (std::isinf(_double) || std::isnan(_double))
        std::cout << "\n";

    /*...*/

    else if (std::to_string(_double).length() > 6)
        std::cout << "\n";
    else 
        std::cout << ".0\n";
}

void Convertation::convert()
{
    defType();
    if (_type == "char")
        fromChar();
    else if (_type == "double" || _type == "int" || _type == "float")
    {
        try
        {
            _double = std::stod(_data);
            _float = static_cast<float>(_double);
            toIntFromDouble();
            printDoubleFloat();
            // std::cout << "float: " << _float;
            // if (std::isinf(_float) || std::isnan(_float) \
            // || _data.find('.') != std::string::npos)
            //     std::cout << "f\n";
            // else
            //     std::cout << ".0f\n";
            // std::cout << "double: " << _double;
            // if (std::isinf(_double) || std::isnan(_double) \
            // || _data.find('.') != std::string::npos)
            //     std::cout << "\n";
            // else
            //     std::cout << ".0\n";
        }
        catch(const std::exception& e)
        {
            std::cout << "char: impossible\n";
            std::cout << "int: impossible\n";
            std::cout << "float: impossible\n";
            std::cout << "double: impossible\n";
        }
    }
    else
        std::cout << "The conversation is impossible\n";
}
