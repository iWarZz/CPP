/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:56:50 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/16 11:07:23 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string input = 0;
	int	i = 0;

	while (1)
	{
		std::cout << "Valid command :" << std::endl;
		std::cout << "ADD:		Add a new contact" << std::endl;
		std::cout << "SEARCH:	Search in contact" << std::endl;
		std::cout << "EXIT:		Quit the program" << std::endl;
		std::cout << "Enter command: ";
		std::cin >> input;
		if (input == "EXIT" || input == "\n")
			return (0);
		else if (input == "ADD")
		{
			phonebook.add_contact();
		}
		else if (input == "SEARCH")
			phonebook.search_contact();
		else
			std::cout << "Valid command : ADD, SEARCH and EXIT" << std::endl;
	}
}


