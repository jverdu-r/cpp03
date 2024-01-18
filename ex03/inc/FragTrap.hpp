/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jverdu-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:55:25 by jverdu-r          #+#    #+#             */
/*   Updated: 2024/01/17 16:55:27 by jverdu-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
         FragTrap(void);
         FragTrap(const FragTrap &fr4gtp);
         FragTrap &operator=(const FragTrap &fr4gtp);
         FragTrap(std::string name);
         ~FragTrap(void);
        void HighFiveGuys(void);
        void attack(const std::string& target);
        void setName(std::string name);
};

#endif
