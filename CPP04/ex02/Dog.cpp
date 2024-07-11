/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:34 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:41:05 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{	
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog default constructor has been called" << std::endl;
}

Dog::Dog(Dog &copy)
{
	std::cout << "Copy dog brain" << std::endl;
	this->type = copy.getType();
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog& Dog::operator=(const Dog &copy)
{
	this->type = copy.type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(copy.getBrain()));
	std::cout << "Dog copy assignment constructor has been called" << std::endl;
	return *this;
}

Dog::~Dog(void) 
{
	delete this->brain;
	std::cout << "Dog default destructor has been called" << std::endl;
}

void Dog::makeSound(void) const 
{
	std::cout << "Woof woof" << std::endl;
}

std::string Dog::getType() const
{
	return (this->type);
}

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}

void Dog::compareTo(Dog const & other_Dog) const
{
	std::cout << std::endl;
	std::cout << "Now comparing two Dogs\n";
	std::cout << "My brain's heap address: " << static_cast<void*>(this->brain) << std::endl;
	std::cout << "Other's heap address: " << static_cast<void*>(other_Dog.getBrain()) << std::endl;
	std::cout << std::endl;
	std::cout << "My brain's ideas \t\t | \t\t\t Other brain's ideas\n";
	for (int i = 0; i < 100; i++)
		std::cout << "-";
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t\t\t | \t\t\t" << ((other_Dog.getBrain())->getIdeas())[i] << std::endl;
	std::cout << std::endl;
}
