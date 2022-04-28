#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	//typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() {};
	~MutantStack() {};
	MutantStack(const MutantStack<T> &other) : std::stack<T>(other){};
	MutantStack const &operator=(const MutantStack<T> &other)
	{
		if (this == &other)
			return (*this);
		std::stack<T>::operator=(other);
		return (*this);
	};

	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

};

#endif