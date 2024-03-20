/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:35:11 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/20 13:13:17 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        ScavTrap(void);
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);
        
        void    attack(const std::string& target);
        void    guardGate(void);
};

#endif