/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:24:44 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 17:24:46 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
#include <iostream>

class Contact{
    private:
       std::string _first_name;
       std::string _last_name;
       std::string _nickname;
       std::string _phone_number;
       std::string _darkest_secret;
    public:
        Contact(void);
        ~Contact(void); 
 
        void        SetFirstName(std::string p_name);
        void        SetLastName(std::string p_name);
        void        SetNickName(std::string p_name);
        void        SetPhoneNumber(std::string p_name);
        void        SetDarkestSecret(std::string p_name);
        std::string GetFirstName(void);
        std::string GetLastName(void);
        std::string GetNickName(void);
        std::string GetPhoneNumber(void);
        std::string GetDarkestSecret(void);
};
#endif
