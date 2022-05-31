/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:34:05 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/11 14:34:06 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

// ************************************************************************** //
//                    		 Constuctor/Destructor                            //
// ************************************************************************** //
DiamondTrap::DiamondTrap(void){
    _name = "Default";
    ClapTrap::_name = _name + "_clap_name";
    _attackDamage = FragTrap::_attackDamageInherit;
    _energyPoints = ScavTrap::_energyPointsInherit;
    _hitPoints = FragTrap::_hitPointsInherit;
    std::cout << "[🆕]Hi! (DiamondTrap) default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name),  ScavTrap(name), FragTrap(name){
    ClapTrap::_name = name + "_clap_name";
    _name = name;
    _attackDamage = FragTrap::_attackDamageInherit;
    _energyPoints = ScavTrap::_energyPointsInherit;
    _hitPoints = FragTrap::_hitPointsInherit;
    std::cout << "[🆕]Hi! (DiamondTrap)" << _name << " parameter constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap(void){
    std::cout << "[🆓]Bye!. (DiamondTrap) destructor called " << std::endl;
}
DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(), ScavTrap(), FragTrap() {
    std::cout << "(DiamondTrap) copy constructor called" << std::endl;
    *this = src;
     return ;
 }
 // ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &raw){
 	if (this != &raw)
     {
		this->_attackDamage = raw.getAttackDamaged();
        this->_energyPoints = raw.getEnergyPoint();
        this->_hitPoints= raw.getHitPoint();
        this->_name = raw.getName();
     }
	return (*this);   
}
 // ************************************************************************** //
//                    	   	 Actions fuctions                                 //
// ************************************************************************** //
void DiamondTrap::whoAmI(void){
   std::cout << "[❔]WhoAmI-> Name : " << _name << ", Claptrap_name : " << ClapTrap::_name << std::endl; 
}
void DiamondTrap::attack(std::string const & target) {
    ScavTrap::attack(target);
 }