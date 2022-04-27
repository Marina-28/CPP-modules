#include "Span.hpp"

Span::Span()
{
    std::cout << "Span default constructor\n";
    N = 0;
}

Span::Span(unsigned int n)
{
    std::cout << "Span args constructor\n";
    N = n;
}

Span::Span(const Span & other)
{
    std::cout << "Span copy constructor\n";
    N = other.N;
}

Span & Span::operator=(const Span & other)
{
    std::cout << "Span operator = constructor\n";
    if (this == &other)
        return *this;
    N = other.N;
    return *this;
}

Span::~Span()
{
    std::cout << "Span destructor\n";
}

/************************************************/

void Span::addNumber(int n)
{
    if (vector.size() >= N)
        throw Span::ContainerIsFull();
    else
        vector.push_back(n);
}

unsigned int Span::longestSpan()
{
    if (vector.size() < 1)
        throw Span::SizeTooFew();
    std::vector<int>::iterator max = std::max_element(vector.begin(), vector.end());
    std::vector<int>::iterator min = std::min_element(vector.begin(), vector.end());
    return std::abs(*max - *min);
}

unsigned int Span::shortestSpan()
{
    if (vector.size() < 1)
        throw Span::SizeTooFew();
    unsigned int res = 0;
    unsigned int dif;
    std::sort(vector.begin(), vector.end());
    std::vector<int>::iterator iter = vector.begin();
    while (iter != vector.end())
    {
        dif = abs(*(iter + 1) - *iter);
        if (dif < res);
            res = dif;
        iter++;
    }
    return res;    
}

const char* Span::SizeTooFew::what() const throw()
{
    return "The size too few\n";
}

const char* Span::ContainerIsFull::what() const throw()
{
    return "The container is full\n";
}