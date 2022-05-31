/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:19:51 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/07 13:19:52 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ************************************************************************** //
//                      	 Constructor/Copy	                              //
// ************************************************************************** //
Fixed::Fixed(void) :_FixedPointValue(0){
	std::cout << "Default constructor called" << std::endl;
	return ;
};

Fixed::Fixed(const int p1) : _FixedPointValue(p1 << _Bits) {
	std::cout << "Int constructor called" << std::endl;
	return ;
};

Fixed::Fixed(float p1) : _FixedPointValue(roundf(p1 * (1 << _Bits))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
};

Fixed::Fixed(Fixed const & src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
};

// ************************************************************************** //
//                      		 Destructor			                          //
// ************************************************************************** //
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
};

// ************************************************************************** //
//               	             Accessors	                                  //
// ************************************************************************** //
int Fixed::getRawBits(void) const{
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_FixedPointValue;
};

void Fixed::setRawBits(int raw) {
	std::cout << "setRawBits member function called" << std::endl;	
	this->_FixedPointValue = raw;
	return ;
};


std::ostream & operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();
	return o;
};

// ************************************************************************** //
//               	             Private attributes                           //
// ************************************************************************** //
int const 	Fixed::_Bits = 8;

// ************************************************************************** //
//               	             Convertion function                          //
// ************************************************************************** //
int Fixed::toInt(void) const{
	return (_FixedPointValue / (1 << _Bits));
};

float Fixed::toFloat(void) const{
	return (roundf(this->_FixedPointValue) / (1 << _Bits));
};

// ************************************************************************** //
//                            Overload  operator                              //
// ************************************************************************** //
Fixed &Fixed::operator=(Fixed const & raw){
	std::cout << "Assignation operator called" << std::endl;
	this->_FixedPointValue = raw.getRawBits();
	return (*this);
};
