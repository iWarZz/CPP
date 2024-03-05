/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:36:20 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/05 13:28:27 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstdlib>
# include <cmath>
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
        Fixed(const float &inFloat);
        Fixed(const int &inInt);
		Fixed &operator=(const Fixed &original);
		~Fixed(void);
		bool operator>(const Fixed &number);
		bool operator>=(const Fixed &number);
		bool operator<(const Fixed &number);
		bool operator<=(const Fixed &number);
		bool operator==(const Fixed &number);
		bool operator!=(const Fixed &number);

		int     getRawBits(void) const;
		void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &number);

#endif