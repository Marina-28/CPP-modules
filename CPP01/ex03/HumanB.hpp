#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <string>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &s);
    void    setName(std::string name);
};

#endif