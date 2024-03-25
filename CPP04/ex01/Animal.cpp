/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:01:06 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/25 12:48:01 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
    std::cout << "(Animal) Animal constructor has been called" << std::endl;
}

Animal::Animal(const Animal &original)
{
    *this = original;
    std::cout << "(Animal) Copy constructor has been called" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
    std::cout << "(Animal) Copy assignment operator called" << std::endl;
    return (*this);
}

Animal::~Animal(void)
{
	std::cout << "(Animal) Default destructor has been called" << std::endl;
}

std::string Animal::getType(void)const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void Animal::makeSound(void) const
{
    std::cout << "(Animal) makeSound has been called" << std::endl;
}
