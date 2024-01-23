/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 07:48:09 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/23 15:23:29 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string str)
{
    this->first_name = str;
}

void Contact::setLastName(std::string str)
{
    this->last_name = str;
}

void Contact::setNickName(std::string str)
{
    this->nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
    this->phone_number = str;
}

void Contact::setDarkestSecret(std::string str)
{
    this->darkest_secret = str;
}