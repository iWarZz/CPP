/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:00:25 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 13:19:03 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap PONEY("PONEY");
	ScavTrap cheval("cheval");

	std::cout << std::endl;

	PONEY.attack("cheval");
	cheval.takeDamage(5);

	std::cout << std::endl;

	PONEY.attack("cheval");
	cheval.takeDamage(1);

	std::cout << std::endl;

	PONEY.attack("cheval");
	cheval.takeDamage(1);

	std::cout << std::endl;

	cheval.beRepaired(7);

	std::cout << std::endl;

	PONEY.attack("cheval");
	cheval.takeDamage(100);

	std::cout << std::endl;

	PONEY.guardGate();

	std::cout << std::endl;

	return 0;
}
