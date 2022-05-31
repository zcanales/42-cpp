/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:11:46 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/10 13:11:47 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ************************************************************************** //
//                    		 Constuctor/Destructor                            //
// ************************************************************************** //
ClapTrap::ClapTrap(void) : _name("Unname"), _hitPoints(10), _energyPoints(10), _attackDamage(0){
    std::cout << "Default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "[👋]Hi! "<< _name << " parameter constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void){
    std::cout << "[🔜]Bye " << _name << "!" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &src) {
     std::cout << "(ClapTrap) copy constructor called" << std::endl;
     _name = src.getName();
     _hitPoints = src.getHitPoint();
     _energyPoints = src.getEnergyPoint();
     _attackDamage = src.getAttackDamaged();
     return ;
 }
// ************************************************************************** //
//                    	   	 Accesoried                                      //
// ************************************************************************** //
std::string ClapTrap::getName(void) const {
    return (this->_name);
}
int ClapTrap::getHitPoint(void) const {
    return (this->_hitPoints);
}
int ClapTrap::getEnergyPoint(void) const {
    return (this->_energyPoints);
}
int ClapTrap::getAttackDamaged(void) const {
    return (this->_attackDamage);
}
// ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
std::ostream & operator<<(std::ostream &o, ClapTrap const &rhs){
	o << "[📝]";
	o << "Name: " << rhs.getName() << ", ";
    o << "Hit_Points:" << rhs.getHitPoint() << ", ";
    o << "Energy_Points:" << rhs.getEnergyPoint() << ", ";
    o << "Attack_Damage:" << rhs.getAttackDamaged() << "]";
	return o;
};
// ************************************************************************** //
//                    	  	 Actions fuctions                                //
// ************************************************************************** //
void ClapTrap::attack(std::string const & target){
    std::cout << "[🗡 ]ClapTrap " << _name << " attacks " << target << ", causing (-" << _attackDamage << ") points of damage!";
    std::cout << std::endl;
}
void    ClapTrap::takeDamage(unsigned int amount){
    if ((int)amount < 0)
    {
        std::cout << "[🚫]Minus amount is imposible" << std::endl;
        return ;
    }
    if (amount > (unsigned int)_hitPoints)
        amount = _hitPoints;
    std::cout << "[🤕]ClapTrap " << _name << " receives a damage of (-" << amount << ")" <<std::endl;
    _hitPoints -= amount;
    if (_hitPoints <= 0)
    {
        std::cout << "[💀]Oh! " << _name << " has died!" << std::endl;
        _hitPoints = 0;
    }
}
void    ClapTrap::beRepaired(unsigned int amount){
    int repaired;
    if ((int)amount < 0)
    {
        std::cout << "[🚫]Minus amount is imposible" << std::endl;
        return ;
    }
    if (amount < (unsigned int)_energyPoints)
        repaired = amount;
    else
        repaired = _energyPoints;
    _hitPoints += repaired;
    std::cout << "[🔋]ClapTrap " << _name << " is reparared with (+" << repaired << ")" <<std::endl;
}