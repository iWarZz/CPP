/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:18:33 by ssalor            #+#    #+#             */
/*   Updated: 2024/08/22 07:33:17 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
		
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		~Bureaucrat(void);
		
		const std::string	&getName(void) const;
		int					getGrade(void) const;

		void 				incrementGrade(void);
		void 				decrementGrade(void);
	
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	
	
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	Bureaucrat	&operator=(const Bureaucrat &bureaucrat);
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif