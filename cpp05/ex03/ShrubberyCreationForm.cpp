/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:13:14 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/21 11:13:15 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <filesystem>
#include <fstream>

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Unknown", 137, 145){
    std::cout << "(ShrubberyCreationForm.) Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 137, 145){
    std::cout << "(ShrubberyCreationForm.) Parameter constructor called" << std::endl;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "(ShrubberyCreationForm) Destructor called" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src) {
    std::cout << "(ShrubberyCreationForm) Copy constructor called" << std::endl;
}
// ************************************************************************** //
//                    	   	 Action                                           //
// ************************************************************************** //
void    ShrubberyCreationForm::action(Bureaucrat const &executor) const
{
    std::ofstream   ofs;
    std::string     line;
    
    std::cout << "[🌲]Creating FileTree" << std::endl;
    line  = executor.getName();
    ofs.open(line.append("_shrubbery"), std::ofstream::out);
    ofs << "           _-_" << std::endl;
    ofs << "        /~~   ~~\\" << std::endl;
    ofs << "      /~~        ~~\\" << std::endl;
    ofs << "     {              } "<< std::endl;
    ofs << "     \\  _-     -_  /"<< std::endl;
    ofs << "        ~  \\ /  ~"<< std::endl;
    ofs << "    _- -   | | _- _"<< std::endl;
    ofs << "      _ -  | |   -_"<< std::endl;
    ofs <<  "           / \\" << std::endl;
    ofs.close();
}