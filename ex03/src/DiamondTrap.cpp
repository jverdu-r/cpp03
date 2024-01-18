/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:24:32 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 16:24:34 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->name = ClapTrap::getName() + "_clap_name";
    std::cout << "new DiamondTrap unit has arrived." << std::endl;
    this->hit_points = FragTrap::getHp();
    this->energy_points = ScavTrap::getEp();
    this->attack_damage = FragTrap::getAd();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = FragTrap::getHp();
    this->energy_points = ScavTrap::getEp();
    this->attack_damage = FragTrap::getAd();
    std::cout << "new DiamondTrap unit named " << this->name << " arrived." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d14tp)
{
    std::cout << "DiamondTrap copied " << d14tp.name << " constructor called." << std::endl; 
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d14tp)
{
    std::cout << "DiamondTrap " << d14tp.name << " copied into " << this->name << std::endl;
    this->name = d14tp.name;
    this->hit_points = d14tp.hit_points;
    this->energy_points = d14tp.hit_points;
    this->attack_damage = d14tp.attack_damage;
    return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap " << this->name << " is dead." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    if (this->energy_points <= 0)
    {
        std::cout << "DiamondTrap " << this->name << " try to attack but his energy level is too low." << std::endl;
    }
    else
    {
        this->energy_points--;
        std::cout << "DiamondTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " damage!." << std::endl;
    }
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "Who am I " << this->name << " or " << ClapTrap::getName() << "." << std::endl;
}
