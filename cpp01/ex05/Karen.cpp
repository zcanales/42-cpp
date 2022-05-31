/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:00:45 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/03 15:00:46 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
    return;
};

Karen::~Karen(void){
    return ;
}

void Karen::_debug(void){
    std::cout << "[DEBUG]" << std::endl;;
    std::cout << "I love to get extra bacon for";
    std::cout << "my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
    std::cout << "I just love it!" << std::endl;
    return ;
}

void Karen::_info(void){
    std::cout << "[INFO] " << std::endl;;
    std::cout << "I cannot believe adding extra bacon cost more money. ";
    std::cout << "You don't put enough! ";
    std::cout << "If you did I would not have to ask for it!" << std::endl;
    return ;
}

void Karen::_warning(void){
    std::cout << "[WARNING] " << std::endl;;
    std::cout << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming here for years ";
    std::cout << "and you just started working here last month." << std::endl;
    return ;
}

void Karen::_error(void){
    std::cout << "[ERROR] " << std::endl;;
    std::cout << "This is unacceptable, ";
    std::cout << "I want to speak to the manager now." << std::endl;
    return ;
}

void Karen::complain (std::string level){

    std::string comment[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};
    void(Karen::*ptr_function)(void) = NULL;
    //typedef void(Karen::*ptr_function)(void);

    int i = 0;
    while (i < 4 && level.compare(comment[i]))
        i++;
    switch (i)
    {
        case 0:
            ptr_function = &Karen::_debug;
            break;
        case 1:
            ptr_function = &Karen::_info;
           break;
        case 2:
            ptr_function = &Karen::_warning;
            break;
        case 3:
            ptr_function = &Karen::_error;;
            break;
         case 4:
             std::cout << "Incorrect argument it must be (DEBUG/INFO/WARINNG/ERROR)" << std::endl;
             return;
    }
    (this->*(ptr_function))();
};

