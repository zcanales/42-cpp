/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:07:54 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 13:07:55 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "Weapon.hpp"

Weapon::~Weapon(void){
};
Weapon::Weapon(std::string type){
    this->setType(type);
};
std::string const &Weapon::getType(void) const {
    return (this->_type);
};
void    Weapon::setType(std::string type){
    this->_type = type;
    return ;
};
