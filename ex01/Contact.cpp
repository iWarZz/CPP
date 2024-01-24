/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 07:48:09 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/24 13:57:34 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string str)
{
    this->first_name = str;
}

void	Contact::setLastName(std::string str)
{
    this->last_name = str;
}

void	Contact::setNickname(std::string str)
{
    this->nickname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
    this->phone_number = str;
}

void	Contact::setDarkestSecret(std::string str)
{
    this->darkest_secret = str;
}

const std::string &Contact::getFirstName(void) const
{
    return this->first_name;
}

const std::string& Contact::getLastName(void) const 
{
    return this->last_name;
}

const std::string& Contact::getNickname(void) const 
{
    return this->nickname;
}

const std::string& Contact::getPhoneNumber(void) const 
{
    return this->phone_number;
}

const std::string& Contact::getDarkestSecret(void) const 
{
    return this->darkest_secret;
}
