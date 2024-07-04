/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:03:57 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/04 12:55:55 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club = Weapon("a knife");
HumanA Arnold("Arnold", club);
Arnold.attack();
club.setType("a big knife");
Arnold.attack();
}
{
Weapon club = Weapon("a taser");
HumanB jim("Jim");
jim.setWeapon(&club);
jim.attack();
club.setType("a fork");
jim.attack();
}
return 0;
}
