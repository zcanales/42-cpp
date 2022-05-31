/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:08:55 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 13:08:56 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
# define __HUMANB_H__
# include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon  *_weapon;

    public:
        HumanB(std::string name);
        ~HumanB(void);
        void attack(void);
        void    setWeapon(Weapon &weapon);
};
#endif