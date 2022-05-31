/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:24:31 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/09 10:38:00 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <cstdlib>


PhoneBook::PhoneBook(void) : nbr_contact(-1), index_contact(-1){
}
 
void    PhoneBook::add_contact(void)
{
    std::string name;

    if (this->index_contact == 7)
        this->index_contact = 0;
    else
        this->index_contact++;
    std::cout << "Add the new contact's information:" << std::endl;
    std::cout << "First name:" << std::endl;
    std::cin >> name;
 //   std::getline(std::cin, name);
    this->contact_array[this->index_contact].SetFirstName(name);
    std::cout << "Last name:" << std::endl;
    std::cin >> name;
    this->contact_array[this->index_contact].SetLastName(name);
    std::cout << "Nickname:" << std::endl;
    std::cin >> name;
    this->contact_array[this->index_contact].SetNickName(name);
    std::cout << "Phone number:" << std::endl;
    std::cin >> name;
    this->contact_array[this->index_contact].SetPhoneNumber(name);
    std::cout << "Darkest Secret:" << std::endl;
    std::cin >> name;
    this->contact_array[this->index_contact].SetDarkestSecret(name);
    if (this->nbr_contact < 8)
        this->nbr_contact++;
   
}

void    PhoneBook::Print(std::string to_print) 
{
    if (to_print.size() > 9)
        std::cout << to_print.substr(0,9) << "." ;
    else
        std::cout << std::setw (10) << to_print << std::setfill (' ');

}

void    PhoneBook::show_all_info(void)
{
    int i;

    i = -1;
    std::cout << "     Index| FirstName|  LastName|  Nickname" << std::endl;
    while (++i <= this->nbr_contact)
    {
        std::cout << std::setw(10) << i << "|";
        this->Print(this->contact_array[i].GetFirstName());
        std::cout << "|" ;
        this->Print(this->contact_array[i].GetLastName());
        std::cout << "|" ;
        this->Print(this->contact_array[i].GetNickName());
        std::cout << std::endl;
    }
}

void    PhoneBook::search_contact(void)
{
    std::string str_index;
    int int_index;
    std::size_t found;
    std::string numbers;
   
   
    if (this->nbr_contact == -1)
    {
        std::cout << " There are not contact to show yet, let's add some!" << std::endl;
        return ;
    }
    this->show_all_info();
    std::cout << " Enter de index of the contact: " << std::endl;
    while (1)
    {
        numbers = "0123456789";
        std::cin >> str_index;
        if (str_index.empty())
           return ;
        
        found = numbers.find(str_index);
        if (found == std::string::npos)
            std::cout << " Invalid index, enter anotherr between " << "0 and " << this->nbr_contact<< std::endl;
        else
        {
            int_index = atoi(str_index.c_str());
            if (int_index < 0 || int_index > this->nbr_contact)
                std::cout << " Invalid index, enter another between " << "0 and " << this->nbr_contact<< std::endl;
            else
                break;
        }
       str_index.clear();
    }
    std::cout << "First Name: " << this->contact_array[int_index].GetFirstName() << std::endl;
    std::cout << "Last Name: " << this->contact_array[int_index].GetLastName() << std::endl;
    std::cout << "Nick Name: " << this->contact_array[int_index].GetNickName() << std::endl;
    std::cout << "Phone Number: " << this->contact_array[int_index].GetPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << this->contact_array[int_index].GetDarkestSecret() << std::endl;
}
