#include "Span.hpp"

int main()
{
    // Span a;
    // try
    // {
    //     a.addNumber(5);
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // try
    // {
    //     a.longestSpan();
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    // Span b(5);

    // try
    // {
    //     b.addNumber(5);
    //     b.addNumber(6);
    //     std::cout << b.longestSpan() << std::endl;
    //     std::cout << b.shortestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    // size_t count;
    // count = 100000;
    // Span c(count);
    // try
    // {
    //     for (size_t i = 0; i < count; i++)
    //     {
    //         c.addNumber(i);
    //     }
    //     std::cout << c.longestSpan() << std::endl;
    //     std::cout << c.shortestSpan() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    

    
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;

}