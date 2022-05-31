/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:08:00 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 13:08:01 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
# define __WEAPON_H__
# include <iostream>
# include <string>

class Weapon{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string const &getType(void) const ;
        void    setType(std::string const type);

};
#endif
