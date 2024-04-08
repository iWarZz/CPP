/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:27 by ssalor            #+#    #+#             */
/*   Updated: 2024/04/08 11:33:34 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "(Cat) Default constructor has been called" << std::endl;
    try
    {
        this->brain = new Brain();
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Brain's Cat memory fail" << e.what() << std::endl;
    }
}

Cat::Cat(const Cat &original)
{
    *this = original;
    this->brain = new Brain();
    std::cout << "(Cat) Copy constructor has been called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
    if (this != &copy)
        *this = copy;
    std::cout << "(Cat) Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "(Cat) Default destructor has been called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "MIIAAAAAAAOUU" << std::endl;
}
