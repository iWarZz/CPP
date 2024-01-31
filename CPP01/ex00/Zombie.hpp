/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:17:46 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/31 13:27:50 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream> // cin, cout et endl
# include <string>
# include <cstdlib>
# include <stdio.h>

class Zombie{
    private:
        std::string name;
    public:
		void    setName(std::string name);
		const	std::string& getName(void) const;
		void	annonce(void);
        ~Zombie();
};

Zombie 	*newZombie(std::string name);
void    randomChump(std::string name);

#endif