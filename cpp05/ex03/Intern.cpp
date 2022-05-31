/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Internn.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:49:52 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/21 13:49:54 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
Intern::Intern(void) {
    std::cout << "(Intern) Default constructor called" << std::endl;
}
Intern::Intern(Intern const &src){
    std::cout << "(Intern) Copy constructor called" << std::endl;
    *this = src;
}
Intern::~Intern(){
    std::cout << "(Intern) Default destructor called" << std::endl;
}
Intern &Intern::operator=(Intern const & raw){
    std::cout << "(Intern) Parameter cosntructor called" << std::endl;
    if (this != &raw)
    {
        *this = raw;
    }
    return (*this);
}
// ************************************************************************** //
//                    	    	 Actions                                      //
// ************************************************************************** //
AForm *Intern::createPPForm(std::string nameTarget){
    return (new PresidentialPardonForm(nameTarget));
}
AForm *Intern::createRRForm(std::string nameTarget){
    return (new RobotomyRequestForm(nameTarget));
}
AForm *Intern::createSCForm(std::string nameTarget){
    return (new ShrubberyCreationForm(nameTarget));
}
AForm *Intern::makeForm(std::string nameForm, std::string nameTarget){

    AForm *(Intern::*ptr_function[3])(std::string) = {&Intern::createPPForm, &Intern::createRRForm, &Intern::createSCForm};
    std::string formName[3] = { "presidential pardon", "robotomy request", "shrubbery creation"};
    int i;

    i = 0;
    while (i < 3 && formName[i].compare(nameForm))
        i++;
    switch (i)
    {
        case 0:
            std::cout << "[👩]Intern creates " << formName[i] << std::endl;
            return ((this->*(ptr_function[i]))(nameTarget));
        case 1:    
            std::cout << "[👩]Intern creates " << formName[i] << std::endl;
            return ((this->*(ptr_function[i]))(nameTarget));
        case 2:
            std::cout << "[👩]Intern creates " << formName[i] << std::endl;
            return ((this->*(ptr_function[i]))(nameTarget));
    }
    throw Intern::NotKnownForm();
    return (NULL);
}
const char *Intern::NotKnownForm::what() const throw(){
    return ("[🤷‍♀️]I'm an inter don't ask me unknown form please, chose between: [shrubbery reaction] / [robotomy request] / [presidential pardon]");
}