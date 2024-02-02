/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:16:05 by ssalor            #+#    #+#             */
/*   Updated: 2024/02/02 11:10:16 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str; //PTR
    std::string &stringREF = str;  //REF

    std::cout << "Address of STR        = " << &str << std::endl; 
    std::cout << "Pointer STR value     = " << stringPTR << std::endl; //PTR
    std::cout << "Reference STR value   = " << &stringREF << std::endl; //REF
    std::cout << std::endl;
    std::cout << "In str = " << str << std::endl;
    std::cout << "In PTR = " << *stringPTR << std::endl;
    std::cout << "In REF = " << stringREF << std::endl;
    return (EXIT_SUCCESS);
}
