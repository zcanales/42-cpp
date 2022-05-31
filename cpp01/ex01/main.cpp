/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:11:23 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/09 13:11:26 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int check_number(std::string str)
{
    size_t i;

    i = -1;
    while (++i < str.size()) 
    {
        if (std::isdigit(str[i]) == 0)
            return (0);
    }
    return (1);
}

int main(int argc, char **argv)
{
    int number;
    Zombie *array_Zombie;


    if (argc == 2)
    {
       if (!check_number(argv[1]))
       {
           std::cout << "Invalid number" << std::endl;
            return (1);
       }
        number = atoi(argv[1]);
        if (number > 0)
        {
            std::string name;
            std::cout << "Enter a name for the zombie: " << std::endl;
            std::getline(std::cin, name);
            array_Zombie = zombieHorde(number, name);
            delete [] array_Zombie;
        }
    }
    return (0);
}
