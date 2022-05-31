/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 19:00:43 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/08 19:00:44 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point A(0, 0);
    Point B(20, 0);
    Point C(10, 30);
    Point P(10, 29.09f);
    std::cout << "---------1.TEST---------" << std::endl;
    std::cout << "[📐]Let us check whether the point P lies inside the triangle formed by A, B and C!" << std::endl;
    std::cout << "A: " << A << std::endl;
    std::cout << "B: " << B << std::endl;
    std::cout << "C: " << C << std::endl;
    std::cout << "Point P: " << P << std::endl;
    std::cout << "[❔]The point is : " << std::endl;

    if (bsp(A, B, C, P))
        std::cout << "[✅] Inside!" << std::endl << std::endl;
    else
        std::cout << "[❌]Out" << std::endl << std::endl; 
    
    std::cout << "---------2.TEST---------" << std::endl;
    Point M(10, 30.05f);
    std::cout << "[📐]Let us check whether the point M lies inside the triangle formed by A, B and C!" << std::endl;
    std::cout << "A: " << A << std::endl;
    std::cout << "B: " << B << std::endl;
    std::cout << "C: " << C << std::endl;
    std::cout << "Point M: " << M << std::endl;
    std::cout << "[❔]The point is : " << std::endl;
    if (bsp(A, B, C, M))
        std::cout << "[✅] Inside!" << std::endl;
    else
        std::cout << "[❌]Out" << std::endl; 
   return 0;
}