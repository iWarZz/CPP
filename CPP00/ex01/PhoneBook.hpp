/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:36:53 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/26 13:48:34 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <cstdlib>
# include <sstream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook{
	private:
		Contact	contacts[8];
		size_t	count;
	public:
		void	add_contact();
		void	search();
		PhoneBook();
};

#endif