/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:01:33 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/08 13:50:56 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::debug(void)
{
    std::cout << "\"DEBUG\" level: Debug messages contain contextual information. They are mostly used for problem diagnosis.\n Example: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!\"" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "\"INFO\" level: These messages contain extensive information. They are helpful for tracing program execution in a production environment.\n Example: \"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "\"WARNING\" level: Warning messages indicate a potential issue in the system. However, it can be handled or ignored.\n Example: \"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\"" << std::endl;

}

void    Harl::error(void)
{
    std::cout << "\"ERROR\" level: These messages indicate an unrecoverable error has occurred. This is usually a critical issue that requires manual intervention.\n Example: \"This is unacceptable! I want to speak to the manager now.\"" << std::endl;
}

void Harl::complain(std::string level) 
{
    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*ptr[i])();
            break;
        }
    }
}