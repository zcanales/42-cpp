/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:01:08 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/08 19:01:09 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/* Instead of P1, P2 and P3, lets assume the points as A,B and C.
          A(10,30)
            / \
           /   \
          /     \
         /   P   \      P'
        /         \
B (0,0) ----------- C(20,0) 

1) Calculate area of the given triangle, i.e., area of the triangle ABC in the above diagram. 

    Area A = [ x1(y2 - y3) + x2(y3 - y1) + x3(y1-y2)]/2

2) Calculate area of the triangle PAB. We can use the same formula for this. Let this area be A1.
3) Calculate area of the triangle PBC. Let this area be A2.
4) Calculate area of the triangle PAC. Let this area be A3.
5) If P lies inside the triangle, then A1 + A2 + A3 must be equal to A
    and A1, A2 or A3 cannot be 0 (this would mean the point is in the border of the triangle).*/

bool bsp(Point const a, Point const b, Point const c, Point const point)
{

    Fixed A (Point::Area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY()));
    Fixed A1 (Point::Area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY()));
    Fixed A2 (Point::Area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY()));
    Fixed A3 (Point::Area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY()));
    if (A1.toFloat() == 0 || A2.toFloat() == 0 || A3.toFloat() == 0)
        return (0);
    if (A.toFloat() == (A1.toFloat() + A2.toFloat() + A3.toFloat()))
        return (1);
    return (0);

}