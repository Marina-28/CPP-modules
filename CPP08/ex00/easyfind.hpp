#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>
#include <algorithm>

template <class T>
void easyfind(T &cont, int numb)
{
    typename T::iterator iter;
    iter = std::find(cont.begin(), cont.end(), numb);
    if (iter == cont.end())
        std::cout << "The numb " << numb << " is not found\n.";
    else
        std::cout << "The numb " << numb << " is found\n.";
}

#endif