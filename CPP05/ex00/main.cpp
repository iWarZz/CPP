/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 12:26:05 by ssalor            #+#    #+#             */
/*   Updated: 2024/08/22 07:59:23 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	std::cout	<< std::endl << "*** constructor ***" << std::endl << std::endl;

	try {
		Bureaucrat	Bernard("Bernard", 1);
		std::cout << Bernard;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	try {
		Bureaucrat	Bernard("Bernard", -101);
		std::cout << Bernard;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}


	try {
		Bureaucrat	Bernard("Bernard", 515144);
		std::cout << Bernard;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

		std::cout	<< std::endl << "*** increment ***" << std::endl << std::endl;

	try {
		Bureaucrat	Bernard("Bernard", 24);
		std::cout << Bernard;
		Bernard.incrementGrade();
		std::cout << Bernard;
		Bernard.incrementGrade();
		std::cout << Bernard;
		Bernard.incrementGrade();
		std::cout << Bernard;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

		std::cout	<< std::endl << "*** decrement ***" << std::endl << std::endl;

	try {
		Bureaucrat	Bernard("Bernard", 142);
		std::cout << Bernard;
		Bernard.decrementGrade();
		std::cout << Bernard;
		Bernard.decrementGrade();
		std::cout << Bernard;
		Bernard.decrementGrade();
		std::cout << Bernard;
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}