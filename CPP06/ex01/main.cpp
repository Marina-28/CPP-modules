#include "header.hpp"

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data *d = new Data;

    d->c = '!';
    d->d = 2.0;
    d->f = 5.5f;
    d->i = 8;
    d->s = "ex01";

    std::cout << "c: " << d->c << std::endl;
    std::cout << "d: " << d->d << std::endl;
    std::cout << "f: " << d->f << std::endl;
    std::cout << "i: " << d->i << std::endl;
    std::cout << "s: " << d->s << std::endl;
    std::cout << std::endl;

    uintptr_t ex = serialize(d);
    Data *d1 = deserialize(ex);

    std::cout << "c: " << d1->c << std::endl;
    std::cout << "d: " << d1->d << std::endl;
    std::cout << "f: " << d1->f << std::endl;
    std::cout << "i: " << d1->i << std::endl;
    std::cout << "s: " << d1->s << std::endl;

    delete d;
    return 0;
}