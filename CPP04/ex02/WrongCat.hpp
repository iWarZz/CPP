/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:31:20 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:26:13 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{  
    public:
        WrongCat(void);
        WrongCat(const WrongCat &copy);
        WrongCat &operator=(const WrongCat &copy);
        ~WrongCat(void);
        virtual void makeSound(void) const; 
};



#endif