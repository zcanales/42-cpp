/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 13:19:59 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/07 13:20:01 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
//# include <string>
# include <cmath>

class Fixed{
	public:
		Fixed(void);		
		Fixed(const int p1);
		Fixed(const float p1);
		Fixed(Fixed const &src);
		~Fixed(void);	
		int getRawBits(void) const;	
		void setRawBits(int raw);
		float toFloat( void ) const;
		int toInt( void ) const;
		Fixed &operator=(Fixed const & raw);
	
	private:
		int _FixedPointValue;
		static const int _Bits;

};
std::ostream & operator<<(std::ostream &o, Fixed const &rhs);
#endif
