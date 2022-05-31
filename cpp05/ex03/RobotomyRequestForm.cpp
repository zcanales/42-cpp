/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:13:31 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/21 11:13:33 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"
// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Unknown", 45, 72){
    std::cout << "(RobotomyRequestForm) Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : AForm(name, 45, 72){
    std::cout << "(RobotomyRequestForm) Parameter constructor called" << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "(RobotomyRequestForm) Destructor called" << std::endl;
};
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src) {
    std::cout << "(RobotomyRequestForm) Copy constructor called" << std::endl;
}
// ************************************************************************** //
//                    	   	 Action                                           //
// ************************************************************************** //
void    RobotomyRequestForm::action(Bureaucrat const &executor) const{
    std::cout << "[🔊]BRURRURUURURURU!!! "<< executor.getName() << " has been successfully robotomized 50% of the time." << std::endl;
}