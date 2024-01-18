/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:54:26 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:54:28 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "new ClapTrap unit has arrived." << std::endl;
    this->setHp(10);
    this->setEp(10);
    this->setAd(0);
}

ClapTrap::ClapTrap(std::string name)
{
    this->setName(name);
    this->setHp(10);
    this->setEp(10);
    this->setAd(0);
    std::cout << "new ClapTrap unit named " << this->name << " arrived." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cl4tp)
{
    std::cout << "Claptrap copied " << cl4tp.name << " constructor called." << std::endl; 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cl4tp)
{
    std::cout << "Claptrap " << cl4tp.name << " copied into " << this->name << std::endl;
    this->name = cl4tp.name;
    this->hit_points = cl4tp.hit_points;
    this->energy_points = cl4tp.hit_points;
    this->attack_damage = cl4tp.attack_damage;
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->name << " try to attack but his energy level is too low." << std::endl;
    }
    else
    {
        this->energy_points--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " damage!." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_points -= amount;
    std::cout << this->name << " has taken " << amount << " points of damage." << std::endl;
    if (this->hit_points <= 0)
    {
        std::cout << this->name << " has taken too much damage and falls to the ground!." << std::endl;
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

void ClapTrap::setName(std::string name)
{
    std::cout << "Unnamed ClapTrap has taken " << name << " as name." <<std::endl;
    this->name = name;
}

void ClapTrap::setHp(int hp)
{
    this->hit_points = hp;
}
void ClapTrap::setEp(int ep)
{
    this->energy_points = ep;
}
void ClapTrap::setAd(int ad)
{
    this->attack_damage = ad;
}
