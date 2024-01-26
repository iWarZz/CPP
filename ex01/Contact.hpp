/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:45:47 by ssalor            #+#    #+#             */
/*   Updated: 2024/01/26 13:56:26 by ssalor           ###   ########.fr       */
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
		void				setFirstName(std::string str);
		void				setLastName(std::string str);
		void				setNickname(std::string str);
		void				setPhoneNumber(std::string str);
		void				setDarkestSecret(std::string str);
		const std::string& getFirstName(void) const;
		const std::string& getLastName(void) const;
		const std::string& getNickname(void) const;
		const std::string& getPhoneNumber(void) const;
		const std::string& getDarkestSecret(void) const;
};

#endif