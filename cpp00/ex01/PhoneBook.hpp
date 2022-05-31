/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:24:48 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 17:24:49 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{
    private:
        int     nbr_contact;
        int     index_contact;
        Contact contact_array[8];

    public:
        PhoneBook(void);
        void    add_contact(void);
        void    show_all_info(void);
        void    search_contact(void);
        void    replace_oldest(void);
        void    Print(std::string to_print);
   
};
#endif
