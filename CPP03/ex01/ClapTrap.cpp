/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 13:47:03 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/21 15:09:28 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Default constructor " << name << " called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->energy_points = copy.energy_points;
	this->hit_points = copy.hit_points;
	this->attack_damage = copy.attack_damage;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &original)
{
	if (this != &original)
	{
		this->name = original.name;
		this->energy_points = original.energy_points;
		this->hit_points = original.energy_points;
		this->attack_damage = original.attack_damage;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_points == 0)
	{
		std::cout << "ClapTrap is out of energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks "
			  << target << " causing points of damage!"<< std::endl;
	this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hit_points || this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " died" << std::endl;
		return ;
	}
	this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name << " took "
			  << amount << " points of damage" << std::endl;
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
			  << " hit points" << std::endl;
}
