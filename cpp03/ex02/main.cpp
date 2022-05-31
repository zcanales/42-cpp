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

//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "-----CONSTRUCTOR------" << std::endl;
    ClapTrap player1("eperaita");
    ClapTrap player2("ullorent");
    ScavTrap player3("ecamara");
    FragTrap player4("oholgado");

    std::cout  << std::endl << "-----INFO------" << std::endl;
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << player3 << std::endl;
    std::cout << player4 << std::endl;

    std::cout << std::endl <<"-----ACTIONS------" << std::endl;
    player1.attack("Random");
    player2.takeDamage(10);
    player2.beRepaired(10);
    player3.attack("Random");
    player3.guardGate();
    
    player4.attack("Random");
    player4.takeDamage(100);
    player4.beRepaired(1);
    player4.highFivesGuys();

    std::cout << std::endl << "-----INFO------" << std::endl;
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << player3 << std::endl;
    std::cout << player4 << std::endl;

     std::cout << std::endl <<"-----DESTRUCTOR------" << std::endl;  
    return (0);
}
