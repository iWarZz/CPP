/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:37 by ssalor            #+#    #+#             */
/*   Updated: 2024/04/08 11:19:15 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{  
    private:
        Brain* brain;
    public:
        Dog(void);
        Dog(const Dog &original);
        Dog &operator=(const Dog &copy);
        ~Dog(void);
        void makeSound(void) const; 
};


#endif