/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:01:32 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/02 10:01:38 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main(int, char**)
{
    Array<int> empty;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    std::cout << "------ [1️⃣]TEST - DEEP COPY ------" << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        tmp[0] = 45;
        test[0] = 26;
        std::cout << "number[0]: "<< numbers[0] << std::endl;
        std::cout << "temp[0]: "<< tmp[0] << std::endl;
        std::cout << "test[0]: "<< test[0] << std::endl;
    }
    //OTHER TYPE OF VARIABLE
    std::cout << "------ [2️⃣ ]TEST - OTHER TYPE OF VARIABLE ------" << std::endl;
    {
        Array<std::string> strings(3);
        strings[0] = "hola_1";
        Array<std::string> tmp = strings; 
        strings[0] = "kaixo_1";
        std::cout << "strings[0]: " << strings[0] << std::endl;
        std::cout << "tmp[0]: " << tmp[0] << std::endl;
    }

    std::cout << "------ [3️⃣ ]TEST - BAD COPY ------" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            delete [] mirror;
            return 1;
        }
    }
    std::cout << "------ [4️⃣ ]TEST - OUT OF RANGE ------" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
