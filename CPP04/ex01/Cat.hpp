/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:31 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:42:30 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{  
	private:
		std::string type;
    	Brain* brain;
    public:
        Cat(void);
        Cat(Cat &copy);
        Cat &operator=(const Cat &copy);
        ~Cat(void);
        std::string getType() const;
        Brain *getBrain( void ) const;
        void compareTo(Cat const & other_Cat) const;
        virtual void makeSound(void) const; 
};



#endif