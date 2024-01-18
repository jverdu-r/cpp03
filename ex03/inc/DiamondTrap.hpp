/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:24:41 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/18 16:24:44 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap(void);
        DiamondTrap(const DiamondTrap &di4tp);
        DiamondTrap &operator=(const DiamondTrap &di4tp);
        DiamondTrap(std::string name);
        ~DiamondTrap(void);
        void attack(const std::string& target);
        void whoAmI(void);
};
#endif
