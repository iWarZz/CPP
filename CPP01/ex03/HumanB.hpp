/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:05:33 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/04 12:42:32 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include "Weapon.hpp"


class HumanB
{
    private:
		std::string name;
		Weapon *weapon;
    public:
		~HumanB(void);
		HumanB(std::string name);
		void setWeapon(Weapon *weapon);
		void attack(void);
};

#endif