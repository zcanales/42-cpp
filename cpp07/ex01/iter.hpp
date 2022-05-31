/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:45:18 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/01 16:45:19 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>


template <typename U>
void Ft_ptr(U const & data){
    std::cout << data << std::endl;
};

template <typename T> 
void iter(T *array, size_t len, void (*ptrF)(T const &)){
std::cout << "array_ " << array << ". len: "<< len <<std::endl;
    size_t i = 0;
    while (i < len)
    {
        ptrF(array[i]);
        i++;
    }
};

#endif
