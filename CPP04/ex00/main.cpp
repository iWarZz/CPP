/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:13:52 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/26 11:57:18 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

using std::cout;
using std::endl;

int	main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* meta_animal = new Animal();

	cout << dog->getType() << "-> "; 
	dog->makeSound();

	cout << cat->getType() << "-> "; 
	cat->makeSound();

	cout << endl;

	meta_animal->makeSound();

	cout << endl;

	cout << "---------- WrongAnimal & WrongCat ----------" << endl;

	const WrongAnimal* wrong_cat = new WrongCat();
	const WrongAnimal* meta_wrong_animal = new WrongAnimal();

	cout << endl;

	cout << wrong_cat->getType() << "-> "; 
	wrong_cat->makeSound();

	meta_wrong_animal->makeSound();

	cout << endl;

	delete dog;
	delete cat;
	delete meta_animal;
	delete wrong_cat;
	delete meta_wrong_animal;

	return EXIT_SUCCESS;
}