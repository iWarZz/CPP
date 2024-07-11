/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:34 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:26:25 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
    std::cout << "(Dog) Default constructor has been called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->type = copy.getType();
    std::cout << "(Dog) Copy constructor has been called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
    this->type = copy.type;
    std::cout << "(Dog) Copy assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    std::cout << "(Dog) Default destructor has been called" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

void Dog::makeSound(void) const
{
    std::cout << "WAF!" << std::endl;
}
