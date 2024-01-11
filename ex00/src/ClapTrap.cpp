#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "new ClapTrap unit has arrived." << std::endl;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << "new ClapTrap unit named " << this->name << " arrived." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << this->name << " is dead." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0)
    {
        std::cout << this->name << " try to attack but his energy level is too low." << std::endl;
    }
    else
    {
        this->energy_points--;
        std::cout << this->name << " attacks " << target << " causing " << this->attack_damage << " damage!." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_points -= amount;
    std::cout << this->name << " has taken " << amount << " points of damage." << std::endl;
    if (this->hit_points <= 0)
    {
        std::cout << this->name << "has taken too much damage and falls to the ground!." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energy_points <= 0)
    {
        std::cout << this->name << " try to repair himself but his energy level is too low." << std::endl;
    }
    else
    {
        this->energy_points--;
        if (this->hit_points + amount > 10)
            this->hit_points = 10;
        else
        {
            this->hit_points += amount;
        }
        std::cout << this->name << " has repaired himself for " << amount << " hit points! and his health is now " << this->hit_points << "." << std::endl;
    }
}