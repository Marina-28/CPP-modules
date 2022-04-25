#include "iter.hpp"

void increment(int &a)
{
    a = a + 1;
}
int main()
{
    int     a[] = {1, 2, 3, 4, 5};
    char    b[] = {'a', 'b', 'c', 'd', 'e'};
    std::string c[] = {"Hello", "everyone", "!", "you are", "cool!"};

    ::iter(a, sizeof(a)/sizeof(a[0]), output);
    ::iter(a, 5, increment);
    ::iter(a, sizeof(a)/sizeof(a[0]), output);
    ::iter(b, sizeof(b)/sizeof(b[0]), output);
    ::iter(c, sizeof(c)/sizeof(c[0]), output);

    return 0;
}