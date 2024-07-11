/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:37 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:41:59 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{  
	private:
		std::string type;
		Brain* brain;
    public:
        Dog(void);
        Dog(Dog &copy);
        Dog &operator=(const Dog &copy);
        ~Dog(void);
        std::string getType() const;
        Brain *getBrain( void ) const;
        void compareTo(Dog const & other_Dog) const;
        virtual void makeSound(void) const; 
};



#endif