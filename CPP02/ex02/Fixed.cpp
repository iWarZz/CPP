/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssalor <ssalor@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:36:17 by ssalor            #+#    #+#             */
/*   Updated: 2024/03/05 15:03:27 by ssalor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

//dans l'exo precedent
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

std::ostream &operator<<(std::ostream &stream, const Fixed &number)
{
    stream << number.toFloat();
    return (stream);
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

float   Fixed::toFloat(void) const
{
    return (float)this->rawbits / (float)(1 << Fixed::bits);
}

int   Fixed::toInt(void) const
{
    return (int)(this->rawbits >> Fixed::bits);
}

//dans l'exo actuel
bool Fixed::operator>(const Fixed &number)
{
	return (this->rawbits > number.getRawBits());
}

bool Fixed::operator>=(const Fixed &number)
{
	return (this->rawbits >= number.getRawBits());
}

bool Fixed::operator<(const Fixed &number)
{
	return (this->rawbits < number.getRawBits());
}

bool Fixed::operator<=(const Fixed &number)
{
	return (this->rawbits <= number.getRawBits());
}

bool Fixed::operator==(const Fixed &number)
{
	return (this->rawbits == number.getRawBits());
}

bool Fixed::operator!=(const Fixed &number)
{
	return (this->rawbits != number.getRawBits());
}

Fixed Fixed::operator+(const Fixed &number)
{
	return Fixed(this->toFloat() + number.toFloat());
}

Fixed Fixed::operator-(const Fixed &number)
{
	return Fixed(this->toFloat() - number.toFloat());
}

Fixed Fixed::operator*(const Fixed &number)
{
	return Fixed(this->toFloat() * number.toFloat());
}

Fixed Fixed::operator/(const Fixed &number)
{
	return Fixed(this->toFloat() / number.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->rawbits += 1;
	return (*this);
}

Fixed Fixed::operator++()
{
	
}
