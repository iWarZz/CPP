/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:31:23 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/25 13:43:49 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "(WrongCat) Default constructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &original)
{
    *this = original;
    std::cout << "(WrongCat) Copy constructor has been called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &copy)
{
    this->type = copy.type;
    std::cout << "(WrongCat) Copy assignment operator called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat(void)
{
    std::cout << "(WrongCat) Default destructor has been called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "WAF!" << std::endl;
}
