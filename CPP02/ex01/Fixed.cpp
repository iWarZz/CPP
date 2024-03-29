/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:09:00 by ssalor            #+#    #+#             */
/*   Updated: 2024/02/28 14:09:31 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void) : rawbits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &original)
{
    if (this != &original)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->setRawBits(original.getRawBits());
    }
    return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float &inFloat) : rawbits(roundf(inFloat * (1 << bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const int &inInt) : rawbits(inInt * (1 << bits))
{
    std::cout << "Int constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	return (this->rawbits);
}

void Fixed::setRawBits(int const raw)
{
    this->rawbits = raw;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &number)
{
    stream << number.toFloat();
    return (stream);
}

float   Fixed::toFloat(void) const
{
    return (float)this->rawbits / (float)(1 << Fixed::bits);
}

int   Fixed::toInt(void) const
{
    return (int)(this->rawbits >> Fixed::bits);
}
