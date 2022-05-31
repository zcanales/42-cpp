/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:36:18 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/09 13:11:10 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#ifndef __ACCOUNT_H__
# define __ACCOUNT_H__
# include <iostream>
# include <string>

class Zombie{
    private:
        std::string _name;
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        void    set_name(std::string name);
};
#endif
Zombie* zombieHorde(int N, std::string name);
