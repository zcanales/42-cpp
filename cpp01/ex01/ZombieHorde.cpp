/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:44:15 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 11:44:17 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    int i;

    Zombie *array_Zombie = new Zombie[N];
    i = -1;
    while (++i < N)
    {
        array_Zombie[i].set_name(name);
        array_Zombie[i].announce();
    }
    return (array_Zombie);
}