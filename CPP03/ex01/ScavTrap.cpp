/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:35:17 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/20 13:18:29 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (this->energy_points == 0)
	{
		std::cout << "ScavTrap is out of energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks "
			  << target << " causing points of damage!"<< std::endl;
	this->energy_points -= 1;
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->name << " is now in keeper mod" << std::endl;
}
