#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <class T>
void output(T &a)
{
    std::cout << a << std::endl;
}

template <class T>
void iter(T *arr, size_t len, void(* fcnPtr)(T&))
{
    for (size_t i = 0; i < len; i++)
    {
        (*fcnPtr)(arr[i]);
    }
}

#endif