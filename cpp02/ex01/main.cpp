/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:19:42 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/08 13:48:46 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is "<<  a << std::endl;
	std::cout << "b is "<<  b << std::endl;
	std::cout << "c is "<<  c << std::endl;
	std::cout << "d is "<<  d << std::endl;

	std::cout << "a is "<<  a.toInt() << " as integer" << std::endl;
	std::cout << "b is "<<  b.toInt() << " as integer" << std::endl;
	std::cout << "c is "<<  c.toInt() << " as integer" << std::endl;
	std::cout << "d is "<<  d.toInt() << " as integer" << std::endl;

	return (0);
}
