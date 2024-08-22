/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:26:10 by ssalor            #+#    #+#             */
/*   Updated: 2024/08/22 07:55:59 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): name("unnamed")
{
    this->grade = 150;
    std::cout << "Bureaucrat new object named : " << this->name << " with " << this->grade << " grade." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
    std::cout << "Bureaucrat new object named : " << this->name << " with " << this->grade << " grade." << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat): name(bureaucrat.getName())
{
    *this = bureaucrat;
    std::cout << "Bureaucrat new copied object named : " << this->name << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Bureaucrat delete object named : " << this->name << std::endl;
}



const   std::string &Bureaucrat::getName(void) const
{
    return (this->name);
}

int     Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void    Bureaucrat::incrementGrade(void)
{
    int pastGrade = this->grade;

    this->grade--;
    if (this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Burreaucrat grade went from " << pastGrade << " to " << this->grade << std::endl;
}

void    Bureaucrat::decrementGrade(void)
{
    int pastGrade = this->grade;

    this->grade++;
    if (this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Burreaucrat grade went from " << pastGrade << " to " << this->grade << std::endl;
}


const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Too high grade (between 1 and 150)");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Too low grade (between 1 and 150)");
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (this != &bureaucrat)
		this->grade = bureaucrat.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	std::cout << "Bureaucrat "  << bureaucrat.getName() <<", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}