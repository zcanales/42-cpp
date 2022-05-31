/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:00:36 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/03 15:00:37 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
      Karen k;
        k.complain(argv[1]);
    }
    else
    {
         std::cout << "Incorrect argument it must be (DEBUG/INFO/WARNING/ERROR)" << std::endl;
         return (1);
    }
    return (0);
}