/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:37 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/09 11:14:09 by ssalor           ###   ########.fr       */
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
        void compareTo(Dog const & other_Dog) const;
        Brain *getBrain(void) const;
};

#endif