/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:24:28 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 17:24:29 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string>

Contact::~Contact(void){
        return;
};

Contact::Contact(void){
        return;
};

/*SETTERS*/
void    Contact::SetFirstName(std::string p_name){
        this->_first_name = p_name;
        return;
};

void    Contact::SetLastName(std::string p_name){
        this->_last_name = p_name ;
        return;
};

void    Contact::SetNickName(std::string p_name){
        this->_nickname = p_name;
        return;
};

void    Contact::SetPhoneNumber(std::string p_name)
{
        this->_phone_number = p_name;
        return;
};

void    Contact::SetDarkestSecret(std::string p_name){
        this->_darkest_secret= p_name;
        return;
};

/*GETTERS*/
std::string   Contact::GetFirstName(void){
        return (this->_first_name);
};

std::string   Contact::GetLastName(void){
        return (this->_last_name);
};

std::string   Contact::GetNickName(void){
        return (this->_nickname);
};

std::string   Contact::GetPhoneNumber(void){
        return (this->_phone_number);
};

std::string   Contact::GetDarkestSecret(void){
        return (this->_darkest_secret);
};
