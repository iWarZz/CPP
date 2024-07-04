/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:05:29 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/04 12:59:16 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
    std::cout << this->name << " give up and leave (destructor)" << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

void    HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}

void    HumanB::attack()
{
    std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
}