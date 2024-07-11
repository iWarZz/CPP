/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:16:53 by ssalor            #+#    #+#             */
/*   Updated: 2024/07/11 10:44:07 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain(void);
        Brain( Brain &copy);
        Brain &operator=(const Brain &copy);
        ~Brain(void);
        std::string *getIdeas();
};

#endif