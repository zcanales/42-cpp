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
	//std::cout << "Default constructor called" << std::endl;
	return ;
};

Fixed::Fixed(const int p1) : _FixedPointValue(p1 << _Bits) {
	//std::cout << "Int constructor called" << std::endl;
	return ;
};

Fixed::Fixed(float p1) : _FixedPointValue(p1) {
	//std::cout << "Float constructor called" << std::endl;
	this->_FixedPointValue = roundf(p1 * (1 << _Bits));
	return ;
};

Fixed::Fixed(const Fixed &src){
	std::cout << "Copy constructor called" << std::endl;
	this->setRawBits(src.getRawBits());
	return ;
};

// ************************************************************************** //
//                      		 Destructor			                          //
// ************************************************************************** //
Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
	return ;
};

// ************************************************************************** //
//               	             Accessors	                                  //
// ************************************************************************** //
int Fixed::getRawBits(void) const{
//	//std::cout << "getRawBits member function called" << std::endl;
	return this->_FixedPointValue;
};

void Fixed::setRawBits(int raw) {
	//std::cout << "setRawBits member function called" << std::endl;	
	this->_FixedPointValue = raw;
	return ;
};


std::ostream & operator<<(std::ostream &o, Fixed const &rhs){
	o << rhs.toFloat();
	return o;
};

// ************************************************************************** //
//               	             Private attributes                           //
// ************************************************************************** //p
int const 	Fixed::_Bits = 8;

// ************************************************************************** //
//               	             Convertion function                          //
// ************************************************************************** //
int Fixed::toInt(void) const{
	return (this->_FixedPointValue >> _Bits);
};

float Fixed::toFloat(void) const{
	return (roundf(this->_FixedPointValue) / (1 << _Bits));
};

// ************************************************************************** //
//                            Overload  operator                              //
// ************************************************************************** //

//////////*COMPARISON*//////////
bool Fixed::operator>(Fixed const & raw) const {
	
	if (this->getRawBits() > raw.getRawBits())
		return 1;
	return 0;
};

bool Fixed::operator>=(Fixed const & raw) const {
	
	if (this->getRawBits() >= raw.getRawBits())
		return 1;
	return 0;
};
bool Fixed::operator<(Fixed const & raw) const {
	
	if (this->getRawBits() < raw.getRawBits())
		return 1;
	return 0;
};
bool Fixed::operator<=(Fixed const & raw) const {
	
	if (this->getRawBits() <= raw.getRawBits())
		return 1;
	return 0;
};
bool Fixed::operator==(Fixed const & raw) const {
	
	if (abs(this->getRawBits() - raw.getRawBits()) < ( 1 / (1<<7)))
//	if (this->getRawBits() == raw.getRawBits())
		return 1;
	return 0;
};
bool Fixed::operator!=(Fixed const & raw) const {
	
	if (this->getRawBits() != raw.getRawBits())
		return 1;
	return 0;
};

//////////*ARITMETIC*//////////
Fixed &Fixed::operator=(Fixed const & raw) {
	//std::cout << "Assignation operator called" << std::endl;
	//Importante comprobar que no sea el mismo.
	if (this != &raw)
		this->_FixedPointValue = raw.getRawBits();
	return (*this);
};

Fixed Fixed::operator+(Fixed const & raw)const {
	//std::cout << "Sum operator called" << std::endl;
	Fixed temp;

	temp.setRawBits(this->_FixedPointValue + raw.getRawBits());
	return (temp);
};
//	Importante, primero sumar y luego añadir con raw. Porque si lo ñadimos desde el contructor se convierte a fractional
Fixed Fixed::operator-(Fixed const & raw) const{
	//std::cout << "Rest operator called" << std::endl;
	Fixed temp;

	temp.setRawBits(this->_FixedPointValue - raw.getRawBits());
	return (temp);
};
Fixed Fixed::operator*(Fixed const & raw) const{
	//std::cout << "Multiply operator called" << std::endl;
	Fixed temp((float)(this->getRawBits() * raw.getRawBits()) / (1 << (2 * _Bits )));
	return (temp);
};
Fixed Fixed::operator/(Fixed const & raw) const{
	//std::cout << "Divide operator called" << std::endl;
	Fixed temp;
	int a = ((this->getRawBits() << _Bits) / raw.getRawBits());
	temp.setRawBits(a);
	return (temp);
};

//////////*PRE-POST*//////////
//ej. a = 0
//++a-> a = 1,
//A la hora de imprimir se cambia?
Fixed Fixed::operator++(){
	//std::cout << "Pre sum operator called" << std::endl;
	this->_FixedPointValue += 1;
	return (*this);
};
Fixed Fixed::operator--(){
	//std::cout << "Pre minus operator called" << std::endl;
	this->_FixedPointValue -= 1;
	return (*this);
};
Fixed Fixed::operator++(int){
	//std::cout << "Post sum operator called" << std::endl;
	Fixed	temp(*this);
	this->_FixedPointValue = this->getRawBits() + 1;
	return (temp);
};
Fixed Fixed::operator--(int) {
	//std::cout << "Post min operator called" << std::endl;
	Fixed	temp(*this);
	this->_FixedPointValue = this->getRawBits() - 1;	
	return (temp);
};

//////////FUNCTION OVERLOADS//////////
Fixed & Fixed::min(Fixed &p1, Fixed &p2){
	if (p1.getRawBits() < p2.getRawBits())
		return (p1);
	else
		return (p2);
};

const Fixed & Fixed::min(Fixed const &p1, Fixed const &p2){
	if (p1.getRawBits() < p2.getRawBits())
		return (p1);
	else
		return (p2);
};
Fixed & Fixed::max(Fixed &p1, Fixed &p2){
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	else
		return (p2);
};

const Fixed & Fixed::max(Fixed const &p1, Fixed const &p2){
	if (p1.getRawBits() > p2.getRawBits())
		return (p1);
	else
		return (p2);
};
