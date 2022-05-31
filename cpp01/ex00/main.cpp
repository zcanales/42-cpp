/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:33:35 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 17:37:05 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
int main(void)
{
    Zombie *Zombie_Heap = newZombie("Zombie_Heap");
    Zombie_Heap->announce();
    delete Zombie_Heap;
    randomChump("Zombie_Stack");
    return (0);
}
