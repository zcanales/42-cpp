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
    this->_hitPoints = ScavTrap::_hitPointsInherit;
    this->_energyPoints = ScavTrap::_energyPointsInherit;
    this->_attackDamage = ScavTrap::_attackDamageInherit;
    std::cout << "[🆕]Hi! (ScavTrap) default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->_hitPoints = ScavTrap::_hitPointsInherit;
    this->_energyPoints = ScavTrap::_energyPointsInherit;
    this->_attackDamage = ScavTrap::_attackDamageInherit;
    std::cout << "[🆕]Hi! (ScavTrap) "<< _name << " parameter constructor called" << std::endl;
}
ScavTrap::~ScavTrap(void){
    std::cout << "[🆓]Bye!. (ScavTrap) destructor called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &src) {
    std::cout << "(ScavTrap) copy constructor called" << std::endl;
    *this = src;
    return ;
 }
// ************************************************************************** //
//                    	   	 Actions fuctions                                 //
// ************************************************************************** //
 void ScavTrap::guardGate(void) {
     std::cout << "[🔓]" << _name << " (ScravTrap) has entered in 'Gate keeper' mode" << std::endl;
 }
 void ScavTrap::attack(std::string const & target){
    std::cout << "[🗡 ]" << "(ScavTrap) " <<_name << " attacks " << target << ", causing (-" << this->_attackDamage << ") points of damage!";
    std::cout << std::endl;
 }
 // ************************************************************************** //
//                    	   	 Static Variables                                  //
// ************************************************************************** //
const int ScavTrap::_hitPointsInherit = 100;
const int ScavTrap::_energyPointsInherit = 50;
const int ScavTrap::_attackDamageInherit = 20;
// ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
ScavTrap	&ScavTrap::operator=(const ScavTrap &raw){
    if (this != &raw)
     {
		this->_attackDamage = raw.getAttackDamaged();
        this->_energyPoints = raw.getEnergyPoint();
        this->_hitPoints= raw.getHitPoint();
        this->_name = raw.getName();
     }
	return (*this);   
 }