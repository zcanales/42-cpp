/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:00:57 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/23 13:52:54 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// ************************************************************************** //
//                      	 Constructor/Copy	                              //
// ************************************************************************** //
Point::Point(void) : _x(0), _y(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
};

Point::Point(float a1, float b1) : _x(a1), _y(b1){
    std::cout << "Float constructor called" << std::endl;
    return ;
};
Point::Point(Point const & src){
	std::cout << "Copy constructor called" << std::endl;
//    Point this = new(src)
    	*this = src;
	return ;
};
// ************************************************************************** //
//                      		 Destructor			                          //
// ************************************************************************** //
Point::~Point(void){
    std::cout << "Destructor called" << std::endl;
    return ;
};
// ************************************************************************** //
//                      		 Accesories			                          //
// ************************************************************************** //
float Point::getX(void) const{
    return (this->_x.toFloat());
};
float Point::getY(void) const {
    return (this->_y.toFloat());
};

// ************************************************************************** //
//                            Overload  operator                              //
// ************************************************************************** //
Point &Point::operator=(const Point  & src){
    if (this != &src)
    {
        *(Fixed*)&this->_x = src.getX();
        *(Fixed*)&this->_y = src.getY();
    }
    return (*this);
}

std::ostream & operator<<(std::ostream &o, Point const &rhs){
	o << "("<< rhs.getX() << ", "<< rhs.getY() << ")";
	return o;
};

float Point::Area(float x1, float y1, float x2, float y2, float x3, float y3)
{
     return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}
