/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:13:13 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 13:13:14 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __HUMANA_H__
# define __HUMANA_H__
# include "Weapon.hpp"

class HumanA{
    private:
        std::string _name;
        Weapon  &_weapon; 
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void attack(void);
};
#endif