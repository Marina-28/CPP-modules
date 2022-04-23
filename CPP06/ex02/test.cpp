#include <string>
#include <iostream>

class Parent
{
protected:
	int m_value;
 
public:
	Parent(int value)
		: m_value(value)
	{
        std::cout << "parent\n";
	}
	
	virtual ~Parent() 
    {
        std::cout << "destr parent\n";
    }
};
 
class Child: public Parent
{
protected:
	std::string m_name;
 
public:
	Child(int value, std::string name)
		: Parent(value), m_name(name)
	{
        std::cout << "child\n";
	}
    ~Child()
    {
        std::cout << "destr child\n";
    }
 
	const std::string& getName() { return m_name; }
};
 
Parent* getObject(bool bReturnChild)
{
	if (bReturnChild)
		return new Child(1, "Banana");
	else
		return new Parent(2);
}
 
int main()
{
	Parent *p = getObject(true);
 
	// Как мы выведем имя объекта класса Child здесь, имея лишь один указатель класса Parent?
    
	delete p;
 
	return 0;
}