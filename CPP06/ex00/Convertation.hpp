#ifndef CONVERTATION_HPP
#define CONVERTATION_HPP

#include <iostream>
#include <string>

class Convertation
{
private:
    std::string _data;
    std::string _type;
    // bool _isPos;
    // bool _isIntPos;
    char _char;
    int _int;
    double _double;
    float _float;
public:
    Convertation();
    Convertation(std::string data);
    Convertation(const Convertation & other);
    Convertation & operator=(const Convertation & other);
    ~Convertation();

    void defType();
    void convert();
    void toChar();
    void toInt();
    void toDouble();
    void toFloat();

};

#endif