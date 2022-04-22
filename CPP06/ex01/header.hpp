#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>

struct Data
{
    int i;
    char c;
    float f;
    double d;
    std::string s;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif