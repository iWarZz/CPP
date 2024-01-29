/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:56:25 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/29 11:57:24 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void display_contact(Contact contact)
{
	std::cout << std::endl;
	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
	std::cout << std::endl;
}

std::string	getFormat(const std::string &field)
{
	if (field.length() > 10)
		return (field.substr(0,9) + ".");
	return (field);
}

PhoneBook::PhoneBook() : count(0) {};

void	PhoneBook::add_contact()
{
    Contact		new_contact;
    std::string input;

	while (1)
	{
		std::cout << "Set first name:";
		std::getline(std::cin, input);
		if (input.empty() || input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "First name not valid" << std::endl;
			continue;
		}
		new_contact.setFirstName(input);
		break;
	}

	while (1)
	{
		std::cout << "Set last name:";
		std::getline(std::cin, input);
		if (input.empty() || input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "Last name not valid" << std::endl;
			continue;
		}
		new_contact.setLastName(input);
		break;
	}

	while (1)
	{
		std::cout << "Set nickname:";
		std::getline(std::cin, input);
		if (input.empty() || input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-0123456789") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "Nickname not valid" << std::endl;
			continue;
		}
		new_contact.setNickname(input);
		break;
	}

	while (1)
	{
		std::cout << "Set phone number:";
		std::getline(std::cin, input);
		if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "Phone number not valid" << std::endl;
			continue;
		}
		new_contact.setPhoneNumber(input);
		break;
	}

	while (1)
	{
		std::cout << "Set darkest secret:";
		std::getline(std::cin, input);
		if (input.empty() || input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-0123456789,.") != std::string::npos)
		{
			std::cin.clear();
			std::cout << "Input for Darkest secret not valid" << std::endl;
			continue;
		}
		new_contact.setDarkestSecret(input);
		break;
	}

	if (count > 7)
	{
		
		this->contacts[count % 8] = new_contact;
		this->count += 1;
	}
	else
	{
		this->count += 1;
		this->contacts[count - 1] = new_contact;
	}
	std::cout << "Contact Added" << std::endl;
}

void	PhoneBook::search()
{
	if (count == 0)
	{
		std::cout << "No contact has been added" << std::endl;
		return ;
	}
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for(size_t i = 0; i < this->count && i <= 7; i += 1)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << getFormat(contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << getFormat(contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << getFormat(contacts[i].getNickname()) << "|";
		std::cout << std::endl;
	}

	std::string index;
	int			conv_index;

	while (1)
	{
		std::cout << "Choose index contact (0 to 7)";
		std::getline(std::cin, index);
		if (index.empty() || index.find_first_not_of("0123456789") == std::string::npos)
		{
			conv_index = atoi(index.c_str());
			if(conv_index <= 7)
				break;
		}
		std::cin.clear();
		std::cout << "invalid intput" << std::endl;
	}
	if (static_cast<size_t>(conv_index) > 7)
		std::cout << "No contact find in this index" << std::endl << std::endl;
	else
		display_contact(this->contacts[conv_index]);
}
