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


#ifndef FIXED_H_
# define FIXED_H_
# include <iostream>
# include <string>

class Fixed{
	public:
		Fixed(void);		
		Fixed(int p1);
		Fixed(Fixed const &src);
		~Fixed(void);		//Canonical
		Fixed &operator=(Fixed const & raw);	//Canonical
		int getRawBits(void) const;	
		void setRawBits(int raw);
	
	private:
		int _FixedPointValue;
		static const int _Bits;

};
std::ostream & operator<<(std::ostream &o, Fixed const &rhs);
#endif
