/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 20:20:11 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/25 20:20:25 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Base.hpp"
#include "B.hpp"
#include "A.hpp"

#include "C.hpp"
#include <cstdlib> 
#include <ctime> 
#include <stdexcept>

Base *generate(void){
    srand((unsigned)time(0)); 
    int v1;
    v1 = (rand()%6)+1; 
    if (v1 % 3 == 0)
        return(new A());
    else if (v1 % 3 == 1)
        return(new B());
    else
        return(new C());
}

void identify(Base* p){
    std::cout << "---Identify by Pointer---" << std::endl;
    A* ptr_A = dynamic_cast<A*>(p);
    if (ptr_A == NULL)
        std::cout << "Not A" << std::endl;
    else
        std::cout << "Type: A" << std::endl;
    B* ptr_B = dynamic_cast<B*>(p);
    if (ptr_B == NULL)
        std::cout << "Not B" << std::endl;
    else
        std::cout << "Type: B" << std::endl;
    C* ptr_C = dynamic_cast<C*>(p);
    if (ptr_C == NULL)
        std::cout << "Not C" << std::endl;
    else
        std::cout << "Type: C" << std::endl;
}

void identify(Base& p){
    std::cout << "---Identify by Reference---" << std::endl;
    try {
        A &da = dynamic_cast<A &>(p);
         std::cout << "Is A" << std::endl;
         (void)da;
    }
    catch(std::bad_cast &bc){
        std::cout << "Not A " << bc.what() << std::endl;
    }
    try {
        B &db = dynamic_cast<B &>(p);
        (void)db;
         std::cout << "Is B" << std::endl;
    }
    catch(std::bad_cast &bc){
        std::cout << "Not B " << bc.what() << std::endl;
    }
    try {
        C &dc = dynamic_cast<C&>(p);
        (void)dc;
         std::cout << "Is C" << std::endl;
    }
    catch(std::bad_cast &bc){
        std::cout << "Not C"  << bc.what() << std::endl;
    }
}

int main()
{
    Base *unknownType = generate();
    identify(unknownType);
    identify(*unknownType);
    delete unknownType;
    return (0);
}