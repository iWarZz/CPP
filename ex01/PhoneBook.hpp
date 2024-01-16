/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:36:53 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/16 10:56:03 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "main.hpp"

class PhoneBook{
	private:
		Contact	contacts[8];
		int 	index;
	public:
		PhoneBook();
		void	add_contact(int i, std::string f_n, std::string l_n,
			std::string n_n, std::string p_n, std::string s);
		void	search_contact();
};

#endif