/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:53:22 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:53:24 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(const ClapTrap &cl4tp);
        ClapTrap &operator=(const ClapTrap &cl4tp);
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
