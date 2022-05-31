/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:33:57 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/18 12:33:58 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void)
{
    std::cout << "[1️⃣ ]TEST 1. INVALID INPUT (GRADE SIGN)" << std::endl;
    try {
        Form p1("house", 25, 151);
        std::cout << "[✅]All Form created" << std::endl;
        }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}
    
    
    std::cout << std::endl << "[2️⃣ ]TEST 2. INVALID INPUT (GRADE EXECUTE)" << std::endl;
    try {
        Form p1("house", 0, 100);
        std::cout << "[✅]All Form created" << std::endl;
        }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}

    std::cout << std::endl << "[3️⃣]TEST 3. SIGN THE FORM" << std::endl;
    try
    {  
        Form p1("house", 25, 100);
        Form p2("car", 15, 90);
        Form p3("motor", 14, 14);
        Bureaucrat b1("Aitor", 15);
        std::cout << p1 << std::endl;
        std::cout << p2 << std::endl;
        std::cout << p3 << std::endl;
        std::cout << "[✅]All Form created" << std::endl;
        b1.signForm(p1);
        b1.signForm(p2);
        b1.signForm(p3);
        std::cout << p1 << std::endl;
        std::cout << p2 << std::endl;
        std::cout << p3 << std::endl;
        b1.incremetGrade();
      //  b1.signForm(p3);
        p3.beSigned(b1);

        std::cout << p3 << std::endl;
    }
     catch (std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}
