/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SracTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:54:51 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/11 11:54:52 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

// ************************************************************************** //
//                    		 Constuctor/Destructor                            //
// ************************************************************************** //
ScavTrap::ScavTrap(void) : ClapTrap(){
    std::cout << "(ScavTrap) default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    std::cout << "[👋]Hi! "<< _name << " (ScavTrap) parameter constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20; 
}
ScavTrap::~ScavTrap(void){
    std::cout << "[🔜]Bye " << _name << "!. (ScavTrap) destructor called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "(ScavTrap) copy constructor called" << std::endl;
     _name = src.getName();
     _hitPoints = src.getHitPoint();
     _energyPoints = src.getEnergyPoint();
     _attackDamage = src.getAttackDamaged();
     return ;
 }
 void ScavTrap::guardGate(void) {
    std::cout << "[🔓](ScravTrap) " << _name << " has entered in 'Gate keeper' mode" << std::endl;
 }
