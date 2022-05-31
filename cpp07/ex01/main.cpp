/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:53:35 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/01 16:53:36 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() 
{
    std::cout << "------ [1️⃣]TEST - INT ------" << std::endl;
    size_t len = 5;
    const int arr[5] = { 1,22,31,42,99};
    iter(arr, len, Ft_ptr);
    
    std::cout << "------ [2️⃣]TEST - STRING ------" << std::endl;
    std::string arr2[5] = {"hola","que","tal","estás","?"};
    iter(arr2, len, Ft_ptr);

    std::cout << "------ [3️⃣]TEST - FLOAT ------" << std::endl;
    float arr3[5] = {3.23, 32.4, 3.4, 8.9, 6.7};
    iter(arr3, len, Ft_ptr);

}