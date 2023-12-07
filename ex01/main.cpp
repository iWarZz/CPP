/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:56:50 by ssalor            #+#    #+#             */
/*   Updated: 2023/12/07 18:18:29 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main()
{
	PhoneBook phonebook;
	std::string s = 0;

	while (1)
	{
		std::cout << "Enter command: ";
		std::cin >> s;
		if (s == "ADD")
			add_contact();
		else if (s == "SEARCH")
			do_another_thing;
		else if (s == "EXIT")
			do_exit;
	}
}
