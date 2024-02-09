/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:05:48 by ssalor            #+#    #+#             */
/*   Updated: 2024/02/09 10:30:48 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);
        const std::string &getType(void) const;
        void setType(std::string type);
}

#endif