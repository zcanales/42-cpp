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

#include "Bureaucrat.hpp"

void printInfo(Bureaucrat & p1, Bureaucrat& p2, Bureaucrat &p3)
{
    std::cout << "[📝]INFO BUREAUCRAT CREATED" << std::endl;
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl; 
}


int main(void)
{
    std::cout << "[1️⃣ ]TEST 1. [🆕👫]CREATE BUREAUCRAT MAX GRADE INVALID" << std::endl;
    try
    {
        Bureaucrat person1("Ecamara", 0);
        std::cout << person1 << std::endl; 
        std::cout << "[✅]All Bureocrat created" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}

    std::cout << std::endl;
 
    std::cout << "[2️⃣ ]TEST 2.[🆕👫]CREATE BUREAUCRAT MIN GRADE INVALID" << std::endl;
    try
    {      
        Bureaucrat person2("Epearita", 152);
        std::cout << person2 << std::endl; 
        std::cout << "[✅]All Bureocrat created" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}
    
    std::cout << std::endl;

    std::cout << "[3️⃣]TEST 3.[🆕👫]CREATE BUREAUCRAT VALID GRADE" << std::endl;
    try
    {
        Bureaucrat person1("Ecamara", 20);
        Bureaucrat person2("Epearita", 1);
        Bureaucrat person3("Ullorent", 21);
        printInfo(person1, person2, person3);
        std::cout << "[✅]All Bureocrat created" << std::endl;
    }
    catch (std::exception &e){
        std::cout << e.what() << std::endl;}
    std::cout << std::endl;

    std::cout << "[4️⃣]TEST 4.[📈📉]CHANGE GRADE(INCREMENT ERROR)-----" << std::endl;
    try {   
        Bureaucrat person1("Ecamara", 20);
        Bureaucrat person2("Epearita", 1);
        Bureaucrat person3("Ullorent", 21);
        printInfo(person1, person2, person3);
       try 
       { 
            person1.incremetGrade();
            person2.incremetGrade();
            person3.incremetGrade();
            
            std::cout << "[✅]All grade could sucefully change" << std::endl;
        }   
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        printInfo(person1, person2, person3);
      }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
   
    std::cout << "[5️⃣ ]TEST 5.[📈📉]CHANGE GRADE(DECREMENT ERROR)" << std::endl;
     try 
     {          
            Bureaucrat person1("Ecamara", 150);
            Bureaucrat person2("Epearita", 50);
            Bureaucrat person3("Ullorent", 21);
            printInfo(person1, person2, person3);
        try 
        { 
            person1.decremetGrade();
            person2.decremetGrade();
            person3.decremetGrade();
            printInfo(person1, person2, person3);
             std::cout << "[✅]All grade could sucefully change" << std::endl;
        }   
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        printInfo(person1, person2, person3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "[6️⃣ ]TEST 6.[📈📉]CHANGE GRADE" << std::endl;
    try 
    {        
        Bureaucrat person1("Ecamara", 20);
        Bureaucrat person2("Epearita", 50);
        Bureaucrat person3("Ullorent", 21);
        printInfo(person1, person2, person3);
       try 
       { 
            person1.decremetGrade();
            person2.incremetGrade();
            person3.decremetGrade();
            printInfo(person1, person2, person3);
            std::cout << "[✅]All grade could sucefully change" << std::endl;
        }   
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        printInfo(person1, person2, person3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
