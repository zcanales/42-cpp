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

FragTrap::FragTrap(void) :ClapTrap() {
    _hitPoints = FragTrap::_hitPointsInherit;
    _energyPoints = FragTrap::_energyPointsInherit;
    _attackDamage = FragTrap::_attackDamageInherit;
    std::cout << "[🆕]Hi! (FragTrap) default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name){
     _hitPoints = FragTrap::_hitPointsInherit;
    _energyPoints = FragTrap::_energyPointsInherit;
    _attackDamage = FragTrap::_attackDamageInherit;
     std::cout << "[🆕]Hi! (FragTrap) "<< _name << " parameter constructor called" << std::endl;
}
FragTrap::~FragTrap(void){
        std::cout << "[🆓]Bye!. (FragTrap) destructor called" << std::endl;
}
FragTrap::FragTrap(const FragTrap &src)  : ClapTrap()
{
	std::cout << "(Fragtrap) copy constructor called\n";
	*this = src;
}
// ************************************************************************** //
//                    	   	 Static Variables                                  //
// ************************************************************************** //
const int FragTrap::_hitPointsInherit = 100;
const int FragTrap::_energyPointsInherit = 100;
const int FragTrap::_attackDamageInherit = 30;

// ************************************************************************** //
//                    	   	 Accesoried                                      //
// ************************************************************************** //

int FragTrap::getHitpoints(void) const{
    return (_hitPoints);
}
int FragTrap::getAttackDamage(void) const{
 //   std::cout << "Dentro Frag:" << _attackDamage;
    return (_attackDamage);
}
 // ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
FragTrap	&FragTrap::operator=(const FragTrap &raw){
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
//                    	   	 Actions fuctions                                  //
// ************************************************************************** //
void FragTrap::highFivesGuys(void){
    std::cout << "[👋]" << _name << " (FragTrap): Could anyone give me a five?" << std::endl;
}