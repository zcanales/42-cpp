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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "Create ClapTrap" << std::endl;
    ClapTrap    player1("eperaita");
    std::cout << "Create ScavTrap" << std::endl;
    ScavTrap    player2("ecamara");
    std::cout << "Create FragTrap" << std::endl;
    FragTrap    player3("oholgado");
    std::cout << "Create DiamondTrap" << std::endl;
    DiamondTrap player4("ullorent");
    std::cout << "-------------------" << std::endl;

    std::cout  << std::endl << "-----INFO------" << std::endl;
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << player3 << std::endl;
    std::cout << player4 << std::endl;
    std::cout << "-------------------" << std::endl;
    
    std::cout << std::endl <<"-----ACTIONS------" << std::endl;
    player1.attack("Random");
    player2.guardGate();
    player3.attack("Random");
    player3.highFivesGuys();
    std::cout << std::endl;
    player4.attack("Ramdom");
    player4.takeDamage(100);
    player4.beRepaired(50);
    player4.whoAmI();
    player4.highFivesGuys();
    player4.guardGate();

    std::cout  << std::endl << "-----INFO------" << std::endl; 
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << player3 << std::endl;
    std::cout << player4 << std::endl;
    
    std::cout << std::endl <<"-----DESTRUCTOR------" << std::endl;
    return (0);
}
