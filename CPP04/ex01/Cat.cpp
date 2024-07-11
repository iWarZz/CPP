/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:27 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:36:00 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{	
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat default constructor has been called" << std::endl;
}

Cat::Cat(Cat &copy)
{
	std::cout << "Copy cat brain" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat& Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "Cat copy assignment constructor has been called" << std::endl;
	return *this;
}

Cat::~Cat(void) 
{
	delete this->brain;
	std::cout << "Cat default destructor has been called" << std::endl;
}

void Cat::makeSound(void) const 
{
	std::cout << "Meow Meow" << std::endl;
}

std::string Cat::getType() const
{
	return (this->type);
}

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two cats\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_cat.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}