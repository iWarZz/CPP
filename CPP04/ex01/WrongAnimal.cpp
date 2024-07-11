/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:30:24 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:25:07 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void)
{
    this->type = "WrongAnimal";
    std::cout << "(WrongAnimal) WrongAnimal constructor has been called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "(WrongAnimal) Copy constructor has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &copy)
{
    this->type = copy.type;
    std::cout << "(WrongAnimal) Copy assignment operator called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "(WrongAnimal) Default destructor has been called" << std::endl;
}

std::string WrongAnimal::getType(void)const
{
    return (this->type);
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "(WrongAnimal) makeSound has been called" << std::endl;
}
