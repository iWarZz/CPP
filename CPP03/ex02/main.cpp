/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:03:16 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/21 15:04:50 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	FragTrap John("John");
	FragTrap Albert("Albert");

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	Albert.beRepaired(100);

	cout << endl;

	Albert.highFivesGuys();

	cout << endl;

	Albert.takeDamage(100);

	return EXIT_SUCCESS;
}