/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:47:03 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/12 15:13:15 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap is out of energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks "
			  << target << " causing <amount> "
			  << "points of damage!" << std::endl;
	this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hit_points || this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " died" << cout::endl;
		return ;
	}
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " took "
			  << amount << " points of damage" << cout::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap is out of energy points!" << std::endl;
		return ;
	}
	this->hit_points += amount;
	this->energy_points -= 1;
	std::cout << "ClapTrap " << this->name 
			  << " has been repaired and gained " << amount
			  << " hit points" << cout::endl;
}
