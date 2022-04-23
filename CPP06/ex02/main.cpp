#include "Base.hpp"

// где firs_value - минимальное число из желаемого диапазона
// last_value - ширина выборки

Base *generate(void)
{
    int random_number;

    Base *ptr;

    srand( time( 0 ) );
    random_number =  1 + rand() % 3;
    switch (random_number)
    {
    case 1:
        ptr = new A;
        std::cout << "generate: class A\n";
        break;
    case 2:
        ptr = new B;
        std::cout << "generate: class B\n";
        break;
    case 3:
        ptr = new C;
        std::cout << "generate: class C\n";
        break;
    default:
        ptr = NULL;
        break;
    }
    return ptr;
}

void identify(Base* p)
{
    A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "identify*: Class A" << std::endl;
	else if (b)
		std::cout << "identify*: Class B" << std::endl;
	else if (c)
		std::cout << "identify*: Class C" << std::endl;
}

void identify(Base& p)
{
    Base *tmp = &p;
	if (tmp == NULL)
		return;
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "identify&: Class A" << std::endl;
		return;
	}
	catch (const std::exception &e)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			std::cout << "identify&: Class B" << std::endl;
			return;
		}
		catch (const std::exception &e)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				std::cout << "identify&: Class C" << std::endl;
				return;
			}
			catch (const std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			std::cout << e.what() << std::endl;
		}
		std::cout << e.what() << std::endl;
	}
}

int main()
{
    Base *ptr;

    ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}