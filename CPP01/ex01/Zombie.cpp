/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:23:57 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/31 14:25:38 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << this->getName() << " died !" << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

const   std::string& Zombie::getName(void) const{
    return (this->name);
}

void Zombie::annonce(void)
{
    std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
