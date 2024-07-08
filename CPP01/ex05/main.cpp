/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:57:44 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/08 13:53:20 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl oui;
	oui.complain("DEBUG");
	std::cout << std::endl;

	oui.complain("INFO");
	std::cout << std::endl;

	oui.complain("WARNING");
	std::cout << std::endl;

	oui.complain("ERROR");
	return 0;
}
