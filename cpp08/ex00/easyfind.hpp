/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:54:07 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/02 17:54:08 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
#include <stdexcept>
#include <algorithm>

template<typename T>
void    easyfind(T x, int &y){
    if (std::end(x) != std::find(begin(x), end(x), y))
        return ;
    throw (std::exception());
};


#endif
