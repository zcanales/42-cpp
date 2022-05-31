/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SracTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:54:57 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/11 11:56:07 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP 
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &src);
        //Overloap operators
        ScavTrap	&operator=(const ScavTrap &raw);
        //Actions functions
        void guardGate(void);
        void attack(std::string const & target);
        protected:
            static const int _hitPointsInherit;
            static const int _energyPointsInherit;
            static const int _attackDamageInherit;

};

#endif