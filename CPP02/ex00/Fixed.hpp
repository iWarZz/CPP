/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:21:58 by ssalor            #+#    #+#             */
/*   Updated: 2024/02/27 11:46:26 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    private:
		int value;
		static const int bits = 8;
    public:
		Fixed(void);
		Fixed(const Fixed &to_copy);
		Fixed &operator=(const Fixed &original);
}

#endif