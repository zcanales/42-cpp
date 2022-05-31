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

//#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main(void)
{
    AForm *p1 = NULL;

    try{
        std::cout << "[1️⃣ ]TEST 1. PRESIDENTIAL FORM " << std::endl;
        p1 = new ShrubberyCreationForm("Shrubbery");
        Bureaucrat b1("Aitor", 45);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        b1.executeForm(*p1);
        b1.signForm(*p1);
        b1.executeForm(*p1);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        delete p1;
    }
    catch (std::exception &e)
    {
        delete p1;
        std::cout << e.what() << std::cout;
    }

    try{
        std::cout << std::endl << "[2️⃣ ]TEST 2. ROBOTOMY REQUEST FORM " << std::endl;
        p1 = new RobotomyRequestForm("Robotomy");
        Bureaucrat b1("Aitor", 45);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        b1.executeForm(*p1);
        b1.signForm(*p1);
        b1.executeForm(*p1);
        b1.incremetGrade();
        b1.executeForm(*p1);
        p1->execute(b1);
        std::cout << b1 << std::endl;
        std::cout << *p1 << std::endl;
        delete p1;
    }
    catch (std::exception &e)
    {
        delete p1;
        std::cout << e.what() << std::cout;
    }

    try
    {
       std::cout << std::endl << "[3️⃣  ]TEST 3. SHUBBERY CREATION FORM " << std::endl;    
       p1 = new PresidentialPardonForm("Pardon");
       Bureaucrat b1("Aitor", 0);
       std::cout << b1 << std::endl;
       std::cout << *p1 << std::endl;
       b1.executeForm(*p1);
       b1.signForm(*p1);
       b1.executeForm(*p1);
       p1->execute(b1);
       std::cout << b1 << std::endl;
       std::cout << *p1 << std::endl; 
       delete p1;
    }
    catch (std::exception &e){
        delete p1;
        std::cout <<  e.what() << std::endl;
    };
    return (0);
}
