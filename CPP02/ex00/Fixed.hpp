/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:21:58 by ssalor            #+#    #+#             */
/*   Updated: 2024/02/28 14:13:49 by ssalor           ###   ########.fr       */
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
		int rawbits;
		static const int bits = 8;
    public:
		Fixed(void);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &original);
		~Fixed(void);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif