/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:36:53 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/23 14:44:03 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include <string>
# include "Contact.hpp"

class PhoneBook{
	private:
		Contact	contacts[8];
		size_t	count;
	public:
		void	add_contact();
		void	search_contact();
		PhoneBook();
};

#endif