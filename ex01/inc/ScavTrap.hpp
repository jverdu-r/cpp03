/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:54:17 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:54:18 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const ScavTrap &cl4tp);
        ScavTrap &operator=(const ScavTrap &cl4tp);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate(void);
        void setName(std::string name);
};

#endif
