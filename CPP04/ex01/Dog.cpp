/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:34 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 11:22:10 by ssalor           ###   ########.fr       */
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
    this->brain = new Brain(*(original.getBrain()));
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

void Dog::compareTo(Dog const & other_Dog) const
{
    std::cout << std::endl;
    std::cout << "Now comparing two Dogs\n";
    std::cout << "My brain's heap address: " << (this->brain) << std::endl;
    std::cout << "Other's heap address: " << (other_Dog.getBrain()) << std::endl;
    std::cout << std::endl;
    std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
    for (int i = 0; i < 100; i++)
        std::cout << "-";
    std::cout << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_Dog.getBrain())->getIdeas())[i] << std::endl;
    std::cout << std::endl;
}

Brain *Dog::getBrain(void) const
{
    return (this->brain);
}