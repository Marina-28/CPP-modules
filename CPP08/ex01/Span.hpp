#ifndef SPAN_HPPP
#define SPAN_HPP


#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>


class Span
{
private:
    unsigned int N;
    std::vector<int> vector;
public:
    Span();
    Span(unsigned int n);
    Span(const Span & other);
    Span & operator=(const Span & other);
    ~Span();

    void addNumber(int n);
    void addFewNumber(int len, int *n);
    unsigned int shortestSpan();
    unsigned int longestSpan();

    class SizeTooFew : public std::exception
    {
    public:
        const char* what() const throw();
    };
    
    class ContainerIsFull : public std::exception
    {
    public:
        const char* what() const throw();
    };

    class ContainerTooSmall : public std::exception
    {
    public:
        const char* what() const throw();
    };
};


#endif