/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:05:33 by ssalor            #+#    #+#             */
/*   Updated: 2024/02/09 10:25:54 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANA_HPP

# include <string>
# include "Weapon.hpp"


class HumanB
{
    private:
		std::string name;
		Weapon &weapon;
    public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack(void);
}

#endif