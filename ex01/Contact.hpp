/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:45:47 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/23 15:25:48 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {
	private:
		std::string		first_name;
		std::string		last_name;
		std::string		nickname;
		std::string		phone_number;
		std::string		darkest_secret;
	public:
		void	Contact::setFirstName(std::string str);
		void	Contact::setLastName(std::string str);
		void	Contact::setNickName(std::string str);
		void	Contact::setPhoneNumber(std::string str);
		void	Contact::setDarkestSecret(std::string str);
};

#endif