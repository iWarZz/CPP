/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 12:11:24 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 13:26:06 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <string>
# include <iomanip>

int main(void)
{
    std::string input;
    
    /*while (1)
    {
        std::cout << "Give a name to the ZOMBIE (stack)" << std::endl;
        std::getline(std::cin, input);
        if (input.empty() || input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-.") != std::string::npos)
	    {
		    std::cin.clear();
		    std::cout << "Zombie name not valid" << std::endl;
            continue;
	    }
        break;
    }*/
    randomChump("Poney");

    /*while (1)
    {
        std::cout << "Give a name to the ZOMBIE (Heap)" << std::endl;
        std::getline(std::cin, input);
        if (input.empty() || input.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ-.") != std::string::npos)
	    {
		    std::cin.clear();
		    std::cout << "Zombie name not valid" << std::endl;
		    continue;
	    }
        break;
    }*/
    input = "Cheval";
    Zombie *new_Z = newZombie(input);
    new_Z->annonce();
    delete new_Z;
    return (EXIT_SUCCESS);
}