#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap cl4tp("cl4tp");
    ClapTrap unit01("unit01");
    ClapTrap unit02;

    for (int i = 0; i < 11; i++)
    {
        cl4tp.attack("unit01");
    }
    cl4tp.takeDamage(5);
    unit01.takeDamage(5);
    cl4tp.beRepaired(3);
    unit01.beRepaired(3);
    cl4tp.takeDamage(10);
    return (0);
}