/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:56:59 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:57:01 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "new FragTrap unit has arrived." << std::endl;
    this->setHp(100);
    this->setEp(50);
    this->setAd(20);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->setHp(100);
    this->setEp(50);
    this->setAd(20);
    std::cout << "new FragTrap unit named " << this->name << " arrived." << std::endl;
}

FragTrap::FragTrap(const FragTrap &fr4gtp)
{
    std::cout << "FragTrap copied " << fr4gtp.name << " constructor called." << std::endl; 
}

FragTrap &FragTrap::operator=(const FragTrap &fr4gtp)
{
    std::cout << "FragTrap " << fr4gtp.name << " copied into " << this->name << std::endl;
    this->name = fr4gtp.name;
    this->hit_points = fr4gtp.hit_points;
    this->energy_points = fr4gtp.hit_points;
    this->attack_damage = fr4gtp.attack_damage;
    return (*this);
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap " << this->name << " is dead." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0)
    {
        std::cout << "FragTrap " << this->name << " try to attack but his energy level is too low." << std::endl;
    }
    else
    {
        this->energy_points--;
        std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " damage!." << std::endl;
    }
}

void FragTrap::HighFiveGuys(void)
{
    std::cout << this->name << " hold his hand in the air and says: Give me those five guys!!." << std::endl;
}

void FragTrap::setName(std::string name)
{
    std::cout << "Unnamed FragTrap has taken " << name << " as name." <<std::endl;
    this->name = name;
}

