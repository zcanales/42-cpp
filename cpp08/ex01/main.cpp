/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:46:29 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/03 12:46:29 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <time.h>

int main()
{
// ************************************************************************** //
//                    	   	 Subject                                             //
// ************************************************************************** //
    std::cout << "----[1️⃣]SUBJECT TEST----" << std::endl;
    Span sp0 = Span(5);
    try {
        sp0.addNumber(5);
        sp0.addNumber(3);
        sp0.addNumber(17);
        sp0.addNumber(9);
        sp0.addNumber(11);
        std::cout << sp0.shortestSpan() << std::endl;
        std::cout << sp0.longestSpan() << std::endl;}
    catch  (std::exception &e){
        std::cout << e.what() << std::endl;
    }
// ************************************************************************** //
//                    	   	 Errors                                             //
// ************************************************************************** //
    std::cout << "----[2️⃣]ERROR TEST----" << std::endl;
    Span sp = Span(3);
    try {
        sp.addNumber(-5);
        std::cout << "Shortest:" << sp.shortestSpan() << std::endl;}
    catch  (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try {
        std::cout << "Longest:" << sp.longestSpan() << std::endl;}
    catch  (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try {
        sp.addNumber(-5);
        sp.addNumber(5);
        sp.addNumber(55);
        sp.addNumber(505);
        std::cout << "Shortest:" << sp.shortestSpan() << std::endl;}
    catch  (std::exception &e){
        std::cout << e.what() << std::endl;
    }
// ************************************************************************** //
//                    	   	 ADD at once                                      //
// ************************************************************************** //
    std::cout << "----[3️⃣] ADD MANY NUMBERS----" << std::endl;
    try{
            srand(time(NULL));
        Span sp3 = Span(10001);
        sp3.addManyNumber();
        std::cout << "Shortest:" << sp3.shortestSpan() << std::endl;
        std::cout << "Longest:" << sp3.longestSpan() << std::endl;
    }
    catch  (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "---- DESTRUCTORS----" << std::endl;
    return(0);

}