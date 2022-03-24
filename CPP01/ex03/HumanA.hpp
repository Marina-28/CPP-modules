#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon      &weapon;
    std::string name;
public:
    HumanA(Weapon &s);   
    HumanA(std::string name, Weapon &s);
    ~HumanA();
    void    attack();
    void    setName(std::string name);
};

#endif