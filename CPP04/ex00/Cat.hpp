/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:31 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/25 12:47:14 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{  
    public:
        Cat(void);
        Cat(const Cat &original);
        Cat &operator=(const Cat &copy);
        ~Cat(void);
        void makeSound(void) const; 
};



#endif