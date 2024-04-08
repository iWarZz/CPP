/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 11:16:53 by ssalor            #+#    #+#             */
/*   Updated: 2024/04/08 11:16:42 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &original);
        Brain &operator=(const Brain &copy);
        ~Brain(void);
};

#endif