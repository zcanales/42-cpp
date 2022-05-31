/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:11:51 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/23 14:04:29 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP 
# include <string>

class ClapTrap{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap(std::string name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap(ClapTrap const &src);
        //Accesories
        std::string getName(void) const;
        int         getHitPoint(void) const;
        int         getEnergyPoint(void) const;
        int         getAttackDamaged(void) const;
        //Actions fuctions                
        void        attack(std::string const & target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};
//Overload operator
std::ostream & operator<<(std::ostream &o, ClapTrap const &rhs);
#endif
