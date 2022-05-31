/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:24:26 by zcanales          #+#    #+#             */
/*   Updated: 2022/05/31 13:54:51 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp" 
#include <iostream>
// ************************************************************************** //
//                    		 Constuctor/Destructor                            //
// ************************************************************************** //
Data::Data(void)  {
    std::cout << "(Data) default constructor called" << std::endl;
}
Data::Data(std::string data) : _dataString(data) {
    std::cout << "(Data) Parameter STRING constructor called" << std::endl;
}
Data::Data(int data) : _dataInt(data) {
    std::cout << "(Data) Parameter INT constructor called" << std::endl;
}
Data::Data(bool data) : _databool(data) {
    std::cout << "(Data) Parameter BOOL constructor called" << std::endl;
}
Data::~Data(void){
    std::cout << "(Data) default constructor called" << std::endl;
}
int Data::getDataInt(void) const {
    return (_dataInt);
}
std::string Data::getDataString(void) const {
    return (_dataString);
}
bool Data::getDataBool(void) const {
    return (_databool);
}
// ************************************************************************** //
//                    		 No Member function                                  //
// ************************************************************************** //
uintptr_t serialize(Data* ptr){
    uintptr_t a = reinterpret_cast<uintptr_t>(ptr);

    return (a);
}
Data* deserialize(uintptr_t raw){
    Data  *a;

    a = reinterpret_cast<Data *>(raw);
    return (a);
}
