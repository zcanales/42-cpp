/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:19:42 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/22 12:36:11 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
/*	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;*/
	
	Fixed a;
	Fixed const b( 10 );
   	Fixed const c( 42.42f );
   	Fixed const d( b );

	a = b + c;
	std::cout << "a = b + c" << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	a = c - b;
	std::cout << "a = c - b" << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	a = b * c;
	std::cout << "a = b * c" << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	a = b / c;
	std::cout << "a = b / c" << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;

	a = 0;
	std::cout << "(a = 0)++" << std::endl;

	std::cout << "a is " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;

	a = 0;
	std::cout << "++(a = 0)" << std::endl;
	std::cout << "a is " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;

	a = 0;
	std::cout << "(a = 0)--" << std::endl;

	std::cout << "a is " << a-- << std::endl;
	std::cout << "a is " << a << std::endl;

	a = 0;
	std::cout << "--(a = 0)" << std::endl;

	std::cout << "a is " << --a << std::endl;
	std::cout << "a is " << a << std::endl;

	std::cout << "min(a, b)" << std::endl;

	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "max(a, b)" << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << "Fixed::min(a, b)" << std::endl;

	std::cout << Fixed::min(a, b) << std::endl;

	std::cout << "Fixed::max(a, b)" << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	Fixed const e(5.0f);
	Fixed const f(5);
	if (f == e)
		std::cout << "f == e" << std::endl;
	else
		std::cout << "f != e" << std::endl;

	return 0; 
}
