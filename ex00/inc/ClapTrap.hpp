#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
};

#endif