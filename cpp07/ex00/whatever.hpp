/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 13:52:07 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/01 13:52:08 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template < typename T >         //Template definition  
void swap(T  &x, T &y){
    T temp_x;
    T temp_y;
    temp_x = x;
    temp_y = y;;
    x = temp_y;
    y = temp_x;
}

template < typename T >         //Template definition  
T const & max(T  const &x, T const &y){
    if (x > y)
        return (x);
    return (y);
}

template < typename T >         //Template definition  
T const & min(T const &x, T const &y){
    if (x < y)
        return (x);
    return(y);
}