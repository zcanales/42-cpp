/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:00:52 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/08 19:00:53 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"
# include <iostream>
# include <cmath>

class Point{
    private:
    Fixed const _x;
    Fixed const _y;
    public:
        //Constructor/Destructor
        Point();
        ~Point();
        Point(Point const &src);
        Point(float a1, float b1);
        //Accesories
        float  getX(void) const;
        float  getY(void) const;
        //Overload operator
        Point& operator=(Point const & src);
        static float Area(float x1, float y1, float x2, float y2, float x3, float y3);
};

std::ostream & operator<<(std::ostream &o, Point const &rhs);
#endif