/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:29:40 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:26:08 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal& operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal(void);
        std::string getType(void) const;
        void setType(std::string type);
        virtual void makeSound(void) const; 
};

#endif