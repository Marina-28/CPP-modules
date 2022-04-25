#include "Array.hpp"

#include <iostream>
#include <string>
#include <exception>

template <class T>
Array<T>::Array()
{
    std::cout << "Array default constructor\n";
    _arr = NULL;
    _arr_size = 0;
}

template <class T>
Array<T>::Array(unsigned int n)
{
    std::cout << "Array args constructor\n";
    _arr_size = n;
    if (_arr_size > 0)
		_arr = new T[_arr_size];
	else
		_arr = NULL;
}

template <class T>
Array<T>::Array(const Array<T> &other)
{
    std::cout << "Array copy constructor\n";
    _arr_size = other.size();
    if (_arr_size > 0)
    {
        _arr = new T[_arr_size];
        for (unsigned int i = 0; i < _arr_size; i++)
        {
            _arr[i] = other._arr[i];
        }
    }
    else
        _arr = NULL;
}

template <class T>
Array<T> & Array<T>::operator=(const Array<T> &other)
{
    std::cout << "Array operator =\n";
    if (this == &other)
        return *this;
    _arr_size = other.size();

    if (_arr_size > 0)
    {
        _arr = new T[_arr_size];
        for (unsigned int i = 0; i < _arr_size; i++)
        {
            _arr[i] = other._arr[i];
        }
    }
    else
        _arr = NULL;
    return *this;
}

template <class T>
Array<T>::~Array()
{
    std::cout << "Array destructor\n";
    if (_arr != NULL)
        delete[] _arr;
}

/**********************************************************/

template <class T>
T & Array<T>::operator[](unsigned int index)
{
    if (index >= this->size() || index < 0)
        throw std::exception();
    return _arr[index];

}

template <class T>
const unsigned int & Array<T>::size() const
{
    return this->_arr_size;
}