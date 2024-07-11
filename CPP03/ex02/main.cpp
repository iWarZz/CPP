/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:03:16 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 13:30:07 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "FragTrap.hpp"

int main(void)
{
	FragTrap John("John");
	FragTrap Albert("Albert");

	std::cout << std::endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	std::cout << std::endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	std::cout << std::endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	std::cout << std::endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	std::cout << std::endl;

	Albert.beRepaired(100);

	std::cout << std::endl;

	Albert.highFivesGuys();

	std::cout << std::endl;

	Albert.takeDamage(100);
	
	std::cout << std::endl;

	return 0;
}