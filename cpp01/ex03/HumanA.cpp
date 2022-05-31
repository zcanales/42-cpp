/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:08:15 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 13:08:16 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA(void) {
    return;
};

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){
};
void    HumanA::attack(void){
    std::cout << this->_name << " attaks with his " << this->_weapon.getType() << std::endl; 
};
