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

int main(void)
{
    ClapTrap player1("eperaita");
    ClapTrap player2("ullorent");
    std::cout << "-----INFO------" << std::endl;
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    std::cout << "-----ACTIONS------" << std::endl;
    player1.attack("Random");
    player2.takeDamage(9);
    player2.beRepaired(10);
    player2.takeDamage(10);
    player1.takeDamage(5);
    player1.beRepaired(2);
    std::cout << "-----INFO------" << std::endl;
    std::cout << player1 << std::endl;
    std::cout << player2 << std::endl;
    return (0);

}
