/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:48:20 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/21 15:07:41 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    if (this->energy_points == 0)
	{
		std::cout << "FragTrap" << this->name << " is out of energy" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " do High fives !" << std::endl;
	this->energy_points -= 1;
}
