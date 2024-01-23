/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:56:50 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/23 14:47:52 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // cin, cout, endl
#include <string> // string class
#include <cstdlib> // exit() && EXIT_* macros
#include <stdio.h> // clearerr()
#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	pb;
	std::string	input;

	while (1)
	{
		std::cout << "------------------------------------:" << std::endl;
		std::cout << "ADD:		Add a new contact" << std::endl;
		std::cout << "SEARCH:	Search in contact" << std::endl;
		std::cout << "EXIT:		Quit the program" << std::endl;
		std::cout << "Enter command: ";
		std::getline(std::cin, input);
		if (input == "EXIT" || input == "\0")
			return (0);
		else if (input == "ADD")
		{
			//std::cout << "Fait ADD";
			pb.add_contact();
		}
		else if (input == "SEARCH")
		{
			std::cout << "Fait SEARCH" << std::endl;
			//phonebook.search_contact();
		}
		else
			std::cout << "Valid command : ADD, SEARCH and EXIT" << std::endl;
	}
}


