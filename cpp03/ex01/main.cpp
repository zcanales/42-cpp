/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:11:36 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/10 13:11:37 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
    ClapTrap player1("eperaita");
    ClapTrap player2("ullorent");
    ScavTrap player3("ecamara");
    
    std::cout << "-----INFO------" << std::endl;
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << player3 << std::endl;

    std::cout << "-----ACTIONS------" << std::endl;
    player1.attack("Random");
    player1.takeDamage(5);
    player2.takeDamage(10);
    player2.beRepaired(10);
    player3.attack("Random");
    player3.takeDamage(10);
    player3.beRepaired(50);
    player3.guardGate();

    std::cout << "-----INFO------" << std::endl;
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << player3 << std::endl;
    
    return (0);

}
