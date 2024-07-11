/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 14:35:17 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:33:39 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
    this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Brain ";
    std::cout << "Brain default constructor has been called" << std::endl;}

Brain::Brain(Brain &copy)
{
    std::string *copy_ideas = copy.getIdeas();
	this->ideas = new std::string [100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy_ideas[i] + " copy";
	std::cout << "Brain copy constructor has been called" << std::endl;
}

Brain& Brain::operator=(const Brain &copy)
{
    for (size_t i = 0; i < 100; i += 1)
        this->ideas[i] = copy.ideas[i];
    std::cout << "(Brain) Copy assignment operator called" << std::endl;
    return (*this);
}

Brain::~Brain(void)
{
	delete [] (this->ideas);
    std::cout << "(Brain) Default destructor has been called" << std::endl;
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}
