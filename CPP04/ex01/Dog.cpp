/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:34 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/25 12:49:21 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "(Dog) Default constructor has been called" << std::endl;
}

Dog::Dog(const Dog &original)
{
    *this = original;
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

void Dog::makeSound(void) const
{
    std::cout << "WAF!" << std::endl;
}
