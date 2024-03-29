/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:53:40 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:53:42 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
    ClapTrap cl4tp("cl4tp");
    ClapTrap unit01("unit01");
    ClapTrap unit02;
    unit02 = unit01;

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
