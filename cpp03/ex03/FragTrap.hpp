/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 13:35:24 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/11 13:35:25 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(std::string name);
        ~FragTrap(void);
        FragTrap(const FragTrap &src);
        //Accesories
        int getHitpoints(void) const;
        int getAttackDamage(void) const;
        //Overloap operators
        FragTrap	&operator=(const FragTrap &raw);
        //Actions fuctions 
        void highFivesGuys(void);
    protected:
        static const int _hitPointsInherit;
        static const int _energyPointsInherit;
        static const int _attackDamageInherit;

};
#endif
