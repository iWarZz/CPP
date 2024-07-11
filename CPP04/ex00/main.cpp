/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:13:52 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:26:59 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstdlib>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const	Animal* meta = new Animal();
	const	Animal* dog = new Dog();
	const	Animal* cat = new Cat();

	const	WrongAnimal* atem = new WrongAnimal();
	const	WrongAnimal* wrong_cat = new WrongCat();

	std::cout << dog->getType() << " is here" << std::endl;
	dog->makeSound();
	std::cout << cat->getType() << " is here" << std::endl;
	cat->makeSound();
	meta->makeSound();

	std::cout << wrong_cat->getType() << " is here" << std::endl;
	wrong_cat->makeSound();
	atem->makeSound();

	return EXIT_SUCCESS;
}