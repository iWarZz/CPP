/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:35:17 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 11:11:27 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "(Brain) Default constructor has been called" << std::endl;
}

Brain::Brain(const Brain &original)
{
    *this = original;
    std::cout << "(Brain) Copy constructor has been called" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
    for (size_t i = 0; i < 100; i += 1)
    {
        this->ideas[i] = copy.ideas[i];
    }
    std::cout << "(Brain) Copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain(void)
{
    std::cout << "(Brain) Default destructor has been called" << std::endl;
}

std::string Brain::getIdeas()
{
    return (this->ideas);
}
