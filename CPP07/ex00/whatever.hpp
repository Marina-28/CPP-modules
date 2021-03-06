#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class T>
void swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <class T>
T min(const T &a, const T &b)
{
    if (a < b)
        return a;
    else if (a > b)
        return b;
    else
        return b;
}

template <class T>
T max(const T &a, const T &b)
{
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return b;
}

#endif