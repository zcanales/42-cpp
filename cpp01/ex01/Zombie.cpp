/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:11:01 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/09 13:11:06 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name){
};
Zombie::Zombie(void){
};
Zombie::~Zombie(){
   std::cout << this->_name << " Destruction" << std::endl; 
};
void Zombie::announce(void){
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
};
void    Zombie::set_name(std::string name){
    this->_name = name;
};
