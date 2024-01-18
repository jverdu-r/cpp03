/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:54:36 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:54:38 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "new ScavTrap unit has arrived." << std::endl;
    this->setHp(100);
    this->setEp(50);
    this->setAd(20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->setHp(100);
    this->setEp(50);
    this->setAd(20);
    std::cout << "new ScavTrap unit named " << this->name << " arrived." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &sc4vtp)
{
    std::cout << "ScavTrap copied " << sc4vtp.name << " constructor called." << std::endl; 
}

ScavTrap &ScavTrap::operator=(const ScavTrap &sc4vtp)
{
    std::cout << "ScavTrap " << sc4vtp.name << " copied into " << this->name << std::endl;
    this->name = sc4vtp.name;
    this->hit_points = sc4vtp.hit_points;
    this->energy_points = sc4vtp.hit_points;
    this->attack_damage = sc4vtp.attack_damage;
    return (*this);
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap " << this->name << " is dead." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->name << " try to attack but his energy level is too low." << std::endl;
    }
    else
    {
        this->energy_points--;
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " damage!." << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name << " is now on guard mode." << std::endl;  
}

void ScavTrap::setName(std::string name)
{
    std::cout << "Unnamed ScavTrap has taken " << name << " as name." <<std::endl;
    this->name = name;
}
