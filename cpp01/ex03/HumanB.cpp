/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:08:35 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 13:08:48 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB(void) {
    return;
};

HumanB::HumanB(std::string name): _name(name){
};
void    HumanB::attack(void){
    std::cout << this->_name << " attaks with his " << this->_weapon->getType() << std::endl; 
};

 void    HumanB::setWeapon(Weapon &weapon){
     this->_weapon = &weapon;
 }