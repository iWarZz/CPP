/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:49:14 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/31 14:26:09 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <string>
# include <iomanip>

class Zombie{
    private:
        std::string name;
    public:
		void    setName(std::string name);
		const	std::string& getName(void) const;
		void	annonce(void);
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif