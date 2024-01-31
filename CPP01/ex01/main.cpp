/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:45:42 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/31 14:23:15 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string input;
	int n;

	while (1)
	{
		std::cout << "Name the zombies" << std::endl;
		std::getline(std::cin, input);
		if (!input.empty())
			break;
	}

	std::cout << "Choose the size of the HORDE" << std::endl;
	std::cin << n;
	Zombie *zombie_horde = zombieHorde(n, input);

	for (int i = 0; i < n; i += 1)
		zombie_horde[i].annonce();
	delete[] zombie_horde;
	return (EXIT_SUCCESS);
}