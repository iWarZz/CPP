/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:27 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 11:22:35 by ssalor           ###   ########.fr       */
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
    this->brain = new Brain(*(original.getBrain()));
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

void Cat::compareTo(Cat const & other_Cat) const
{
    std::cout << std::endl;
    std::cout << "Now comparing two Cats\n";
    std::cout << "My brain's heap address: " << (this->brain) << std::endl;
    std::cout << "Other's heap address: " << (other_Cat.getBrain()) << std::endl;
    std::cout << std::endl;
    std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
    for (int i = 0; i < 100; i++)
        std::cout << "-";
    std::cout << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_Cat.getBrain())->getIdeas())[i] << std::endl;
    std::cout << std::endl;
}

Brain *Cat::getBrain(void) const
{
    return (this->brain);
}