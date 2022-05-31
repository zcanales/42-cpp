/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:33:57 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/18 12:33:58 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

int main(void)
{
    std::cout << "INTER CREATE A FORM " << std::endl;


    try
    {
        Intern inter1;

        AForm *form1 = inter1.makeForm("robotomy request", "Bender");
        std::cout << *form1 << std::endl;
        delete form1;
        AForm *form2 = inter1.makeForm("shrubbery creation", "A");
        std::cout << *form2 << std::endl;
        delete form2;
        AForm *form3 = inter1.makeForm("presidential pardon", "B");
        std::cout << *form3 << std::endl;
        delete form3;
        AForm *form4 = inter1.makeForm("prdddfdsfrdon", "C");
        std::cout << *form4 << std::endl;
        delete form4;
    }
     catch (std::exception &e){
        std::cout << e.what() << std::endl;} 
    
    try
    {
        Intern inter1;
        Bureaucrat b1("Aitor", 3);

        AForm *form1 = inter1.makeForm("robotomy request", "Bender");
        std::cout << *form1 << std::endl;
        std::cout << b1 << std::endl;
        b1.executeForm(*form1);
        b1.signForm(*form1);
        b1.executeForm(*form1);
        delete form1;
    }
    catch (std::exception &e){
    std::cout << e.what() << std::endl;}
    return (0);
}
