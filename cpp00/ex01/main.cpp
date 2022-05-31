/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:24:34 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/07 10:42:47 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"


int main(void)
{
    PhoneBook   book;
    std::string user_command;
	
    while (1)
    {
        std::cout << "What do you want to do?(ADD/SEARCH/EXIT)" << std::endl;
        std::cin >> user_command;
        if (user_command.empty())
            break;
        if (user_command.compare("EXIT") == 0)
            break;
        else if (user_command.compare("ADD") == 0)
            book.add_contact();
        else if (user_command.compare("SEARCH") == 0)
            book.search_contact(); 
        else 
            std::cout <<  "Invalid input" << std::endl;
        user_command.clear();
    }
    return(0);
}
