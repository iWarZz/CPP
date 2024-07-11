/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:13:52 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 11:10:31 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/*int    main(void)
{
    const    Animal*    dog = new Dog();
    const    Animal*    cat = new Cat();

    Dog basic;
    {
    Dog tmp = basic;
    }

    delete dog;
    delete cat;

    return 0;
}*/

int main( void )
{
    // Exercice example
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << std::endl;

    delete dog;
    delete cat;
    std::system("leaks ex02");
    std::cout << std::endl;
    std::cout << std::endl;

    // Proof of deep copy
    Dog medor;
    Cat fifi;

    Dog & medor_ref = medor;
    Cat & fifi_ref = fifi;

    std::cout << std::endl << "creating copies" << std::endl;
    Dog medor_copy(medor_ref);
    Cat fifi_copy(fifi_ref);

    Dog & medor_copy_ref = medor_copy;
    Cat & fifi_copy_ref = fifi_copy;

    std::cout << std::endl << "comparing" << std::endl;
    medor.compareTo(medor_copy_ref);
    fifi.compareTo(fifi_copy_ref);
    std::cout << std::endl;


    // Array of animals
    const Animal    *(animal_array[4]);
    std::cout << std::endl;
    // Half filled with dogs
    for (int i = 0; i < 2; i++)
        animal_array[i] = new Dog();
    std::cout << std::endl;

    // Half filled with cats
    for (int i = 2; i < 4; i++)
        animal_array[i] = new Cat();
    std::cout << std::endl;

    for (int i = 0; i < 4; i++)
        delete animal_array[i];
    std::cout << std::endl;

    // This will fail because Animal is abstract!
    //const Animal a = new Animal();
    std::system("leaks ex02");
    }