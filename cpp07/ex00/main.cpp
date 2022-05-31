/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:52:14 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/01 13:52:15 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "whatever.hpp"

int main()
{
    std::cout << "------ [1️⃣]TEST - INT ------" << std::endl;
    int a = 2;
    int b = 3;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "swap: a - b" << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::cout << "------ [2️⃣]TEST - STRING ------" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "swap: c - d" << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    std::cout << "------ [3️⃣ ]TEST -  ------" << std::endl;
    int f = 5;
    int g = 5;
    std::cout << "f = " << f << ", g = " << g << std::endl;
    std::cout << "&f = " << &f << ", &g = " << &g << std::endl   ; 
    std::cout << "min( f, g ) = " << &::min( f, g ) << std::endl;
    std::cout << "max( f, g ) = " << &::max( f, g ) << std::endl;
    return 0;

}

