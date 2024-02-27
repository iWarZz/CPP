/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:21:58 by ssalor            #+#    #+#             */
/*   Updated: 2024/02/27 13:53:35 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstdlib>
# include <string>
# include <stdio.h>

class Fixed
{
    private:
		int value;
		static const int bits = 8;
    public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &original);
		~Fixed(void);

		int getRawBits(void);
		void setRawBits(int const raw);
};

#endif