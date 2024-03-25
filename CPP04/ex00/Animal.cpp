/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:01:06 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/25 11:16:08 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
    std::cout << "Animal constructor has been called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Copy constructor has been called (Animal)" << std::endl;
}

Animal& Animal::operator=(const Animal &copy)
{
    this->type = copy.type;
    std::cout << "Copy assignment operator called (Animal)" << std::endl;
    return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor has been called (Animal)" << std::endl;
}

std::string Animal::getType(void)const
{
    return (this->type);
}

void Animal::setType(std::string type)
{
    this->type = type;
}


