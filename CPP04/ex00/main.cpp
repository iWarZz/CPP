/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:13:52 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 10:37:49 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* meta_animal = new Animal();

	std::cout << dog->getType() << "-> "; 
	dog->makeSound();

	std::cout << cat->getType() << "-> "; 
	cat->makeSound();

	std::cout << std::endl;

	meta_animal->makeSound();

	std::cout << std::endl;

	std::cout << "---------- WrongAnimal & WrongCat ----------" << std::endl;

	const WrongAnimal* wrong_cat = new WrongCat();
	const WrongAnimal* meta_wrong_animal = new WrongAnimal();

	std::cout << wrong_cat->getType() << "-> "; 
	wrong_cat->makeSound();

	meta_wrong_animal->makeSound();

	std::cout << std::endl;

	delete dog;
	delete cat;
	delete meta_animal;
	delete wrong_cat;
	delete meta_wrong_animal;

	return EXIT_SUCCESS;
}