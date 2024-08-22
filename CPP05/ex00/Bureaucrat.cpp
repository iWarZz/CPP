/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:26:10 by ssalor            #+#    #+#             */
/*   Updated: 2024/08/22 07:04:19 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) name("Noname")
{
    this->grade = 150;
    std::cout << "Bureaucrat new object named : " << this->name << " with " << this->grade << " grade." std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
    std::cout << "Bureaucrat new object named : " << this->name << " with " << this->grade << " grade." std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) name(bureaucrat.getName())
{
    *this = bureaucrat;
    std::cout << "Bureaucrat new copied object named : " << this->name << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat delete object named : " << this->name << std::endl;
}



const   std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int     Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void    incrementGrade(void)
{
    
}

void    decrementGrade(void)
{
    
}
