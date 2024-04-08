/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:34 by ssalor            #+#    #+#             */
/*   Updated: 2024/04/08 11:34:54 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "(Dog) Default constructor has been called" << std::endl;
    try
    {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Brain's Dog memory fail" << e.what() << std::endl;
    }
}

Dog::Dog(const Dog &original)
{
    *this = original;
    this->brain = new Brain();
    std::cout << "(Dog) Copy constructor has been called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
    if (this != &copy)
        *this = copy;
    std::cout << "(Dog) Copy assignment operator called" << std::endl;
    return (*this);
}

Dog::~Dog(void)
{
    delete this->brain;
    std::cout << "(Dog) Default destructor has been called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "WAF!" << std::endl;
}
