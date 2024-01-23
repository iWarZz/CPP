/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:56:25 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/23 15:14:33 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0) {};

void	PhoneBook::add_contact()
{
    Contact		new_contact;
    std::string input;

	std::cout << "Set first name:";
	std::getline(std::cin, input);
	//new_contact.setFirstName(input);

	std::cout << "Set last name:";
	std::getline(std::cin, input);
	//new_contact.setLastName(input);

	std::cout << "Set nickname:";
	std::getline(std::cin, input);
	//new_contact.setNickname(input);

	while (1)
	{
		std::cout << "Set phone number:";
		std::getline(std::cin, input);
		if (!input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "Phone number incorrect" << std::endl;
			continue;
		}
		//new_contact.setPhoneNumber(input);
		break;
	}
	std::cout << "Set darkest secret:";
	std::getline(std::cin, input);
	//new_contact.setDarkestSecret(input);

	if (count > 7)
		this->contacts[count - 1] = new_contact;
	else
	{
		this->count += 1;
		this->contacts[count - 1] = new_contact;
	}
	std::cout << "Contact Added" << std::endl;
}

//void	PhoneBook::search()
//{
//
//}
