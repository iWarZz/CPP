/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:49:09 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/31 14:21:42 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i += 1)
		zombie_horde[i].setName(name);
	return (zombie_horde);
}
