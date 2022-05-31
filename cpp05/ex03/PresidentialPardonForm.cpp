/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:13:46 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/21 11:13:47 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
PresidentialPardonForm::PresidentialPardonForm() : AForm("Unknown", 5, 25){
    std::cout << "(PresidentiaPardonForm) Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 5, 25){
    std::cout << "(PresidentiaPardonForm) Parameter constructor called" << std::endl;
}
PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "(PresidentiaPardonForm) Destructor called" << std::endl;
};
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src) {
    std::cout << "(PresidentiaPardonForm) Copy constructor called" << std::endl;
}
// ************************************************************************** //
//                    	   	 Action                                           //
// ************************************************************************** //
void    PresidentialPardonForm::action(Bureaucrat const &executor) const{
    std::cout << "[🙏]Tells us " << executor.getName() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}