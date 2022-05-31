/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:35:19 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/11 13:35:20 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>
// ************************************************************************** //
//                    		 Constuctor/Destructor                            //
// ************************************************************************** //
FragTrap::FragTrap(void) : ClapTrap(){
    std::cout << "(FragTrap) default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "[🆕]Hi! "<< _name << " (FragTrap) parameter constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
     
}
FragTrap::~FragTrap(void){
        std::cout << "[🆓]Bye " << _name << "!. (FragTrap) destructor called" << std::endl;
}
FragTrap::FragTrap(FragTrap const &src) {
    std::cout << "(FragTrap) copy constructor called " << std::endl;
     _name = src.getName();
     _hitPoints = src.getHitPoint();
     _energyPoints = src.getEnergyPoint();
     _attackDamage = src.getAttackDamaged();
     return ;
}
// ************************************************************************** //
//                    	  	 Actions fuctions                                //
// ************************************************************************** //
void FragTrap::highFivesGuys(void){
    std::cout << "[👋]" << _name << " (FragTrap): Could anyone give me a five?" << std::endl;
}