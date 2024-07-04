/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:06:08 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/04 12:59:05 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon& weapon):weapon(weapon)
{
    this->name = name;
};

HumanA::~HumanA(void)
{
    std::cout << this->name << " run away (destructor)" << std::endl;
}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}