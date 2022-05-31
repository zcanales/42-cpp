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
# include <cmath>

class Fixed{
	private:
		int _FixedPointValue;
		static const int _Bits;
	public:
		Fixed(void);		
		Fixed(const int p1);
		Fixed(const float p1);
		Fixed(Fixed const &src);
		~Fixed(void);		//Canonical
		int getRawBits(void) const;	
		void setRawBits(int raw);
		float toFloat(void) const;
		int toInt(void) const;

// ************************************************************************** //
//                            Overload  operator                              //
// ************************************************************************** //
		//Comparation operators
		bool operator>(Fixed const & raw) const;
		bool operator>=(Fixed const & raw) const;
		bool operator<(Fixed const & raw) const;
		bool operator<=(Fixed const & raw) const;
		bool operator==(Fixed const & raw) const;	
		bool operator!=(Fixed const & raw) const;		
		//Aritmetic operators
		Fixed &operator=(Fixed const & raw);
		Fixed operator+(Fixed const & raw) const;
		Fixed operator-(Fixed const & raw) const;
		Fixed operator*(Fixed const & raw) const;
		Fixed operator/(Fixed const & raw) const;
		//Pre-post
		Fixed operator++(void);
		Fixed operator++(int);
		Fixed operator--(void);
		Fixed operator--(int);
		//Functions overloads
		static Fixed & min(Fixed &p1, Fixed &p2);
		static Fixed const &min(Fixed const &p1, Fixed const&p2);
		static Fixed & max(Fixed &p1, Fixed &p2);
		static Fixed const &max(Fixed const &p1, Fixed const&p2);


};
std::ostream & operator<<(std::ostream &o, Fixed const &rhs);
#endif
