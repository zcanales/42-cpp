/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:33:24 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 17:36:59 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name){
};
Zombie::~Zombie(){
   std::cout << this->_name << " Destruction" << std::endl; 
};
void Zombie::announce(void){
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
};
