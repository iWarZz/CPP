/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:27 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/25 12:47:42 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "(Cat) Default constructor has been called" << std::endl;
}

Cat::Cat(const Cat &original)
{
    *this = original;
    std::cout << "(Cat) Copy constructor has been called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
    this->type = copy.type;
    std::cout << "(Cat) Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat(void)
{
    std::cout << "(Cat) Default destructor has been called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "MIIAAAAAAAOUU" << std::endl;
}
