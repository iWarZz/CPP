/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warzz <warzz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:56:50 by ssalor            #+#    #+#             */
/*   Updated: 2023/12/09 23:35:51 by warzz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string input = 0;

	while (1)
	{
		std::cout << "Valid command :" << std::endl;
		std::cout << "ADD:		Add a new contact" << std::endl;
		std::cout << "SEARCH:	Search in contact" << std::endl;
		std::cout << "EXIT:		Quit the program" << std::endl;
		std::cout << "Enter command: ";
		std::cin >> input;
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.do_another_thing();
		else if (input == "EXIT" || input == "\n")
			return (0);
		else
		//	pas trouver
	}
}
