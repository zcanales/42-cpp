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

class ScavTrap : public ClapTrap{
    public:
        ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const &src);
        void guardGate(void);

};

#endif