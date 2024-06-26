/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:57:18 by ssalor            #+#    #+#             */
/*   Updated: 2024/04/08 11:48:22 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    public:
        Animal(void);
        Animal(const Animal &original);
        Animal& operator=(const Animal &copy);
        virtual ~Animal(void);
        std::string getType(void) const;
        void setType(std::string type);
        virtual void makeSound(void) const = 0; 
};

#endif