#ifndef CONVERTATION_HPP
#define CONVERTATION_HPP

#include <iostream>
#include <string>
#include <cmath>

class Convertation
{
private:
    std::string _data;
    std::string _type;

    char _char;
    int _int;
    double _double;
    float _float;

    void defType();
    void fromChar();

    void toCharFromInt();
    void toIntFromDouble();
    void printDouble();
    void printFloat();
public:
    Convertation();
    Convertation(std::string data);
    Convertation(const Convertation & other);
    Convertation & operator=(const Convertation & other);
    ~Convertation();

    void convert();
};

#endif