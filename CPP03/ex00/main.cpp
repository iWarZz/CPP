/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:00:25 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/15 11:23:41 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap petitponey("petitponey");
	ClapTrap GROSPONEY("GROSPONEY");

	petitponey.attack("GROSPONEY");
	GROSPONEY.takeDamage(5);
	GROSPONEY.beRepaired(3);

	GROSPONEY.attack("petitponey");
	petitponey.takeDamage(9);
	
	petitponey.attack("GROSPONEY");
	GROSPONEY.takeDamage(8);

	return 0;
}
