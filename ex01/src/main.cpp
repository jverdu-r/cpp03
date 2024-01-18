/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:54:45 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:54:47 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main(void)
{
    ClapTrap cl4tp("cl4tp");
    ScavTrap unit01("unit01");
    ScavTrap unit02;
    unit02.setName("unit02");
    unit02 = unit01;

    unit01.guardGate();
    for (int i = 0; i < 11; i++)
    {
        unit01.attack("cl4tp");
    }
    cl4tp.takeDamage(5);
    unit01.takeDamage(5);
    cl4tp.beRepaired(3);
    unit01.beRepaired(3);
    cl4tp.takeDamage(10);
    return (0);
}
