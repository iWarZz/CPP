/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warzz <warzz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:56:25 by ssalor            #+#    #+#             */
/*   Updated: 2023/12/09 23:29:41 by warzz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	PhoneBook::add_contact()
{
	Contact     newContact;
    std::string input;

    std::cin.ignore();
    std::cout << std::endl;
    std::cout << "Enter First Name : ";
    std::getline(std::cin, input);
    if (checkInput(input));
        return ;
    newContact.setFirstName(trimWhiteSpaces(input));
    input.clear();
}
