/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:45:42 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 13:29:20 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>

int main(void)
{
    std::string input;
	int nbr_z = 10;

	input = "Benjamin";
	Zombie *zombie_horde = zombieHorde(nbr_z, input);

	for (int i = 0; i < nbr_z; i += 1)
		zombie_horde[i].annonce();
	delete[] zombie_horde;
	return (EXIT_SUCCESS);
}
