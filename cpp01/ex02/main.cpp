/* ************************************************************************** */
/*                                                                            */
/*                                          <<   :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:53:32 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/02 17:37:17 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main(void)
{
    std::string str;
    std::string *strPtr;
    std::string &strRef = str;

    str = "HI THIS IS BRAIN";
    strPtr = &str;
    std::cout << "--------------ADDRESS------------- " << std::endl;
    std::cout << "Address of the string : " << &str << std::endl;
    std::cout << "Address of the string with Pointer : " << strPtr << std::endl;
    std::cout << "Address of the string with Reference: " << &strRef << std::endl;

    std::cout << "--------------CONTENT------------- " << std::endl;
    std::cout << "Content of the string : " << str << std::endl;
    std::cout << "Content of the string with Pointer : " << *strPtr << std::endl;
    std::cout << "Content of the string with Reference: " << strRef << std::endl;
    return (0);
}
