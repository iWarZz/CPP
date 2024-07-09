/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:57:44 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 14:12:26 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	checkInput(std::string input)
{
	if (input != "DEBUG" && input != "WARNING" && input != "INFO" && input != "ERROR")
	{
		std::cout << "Level of RAGE not valid" << std::endl;
		return 1;
	}
	return 0;
}

int main(void)
{
	Harl Kristine;
	std::string input;

	while (1)
    {
        std::cout << "Set level of RAGE" << std::endl;
        std::getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
        if (input.empty() || checkInput(input))
	    {
		    std::cin.clear();
            continue;
	    }
		Kristine.complain(input);
        break;
    }
	return 0;
}
