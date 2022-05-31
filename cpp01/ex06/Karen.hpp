/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:00:54 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/03 15:00:55 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __KAREN_H__
# define __KAREN_H__
# include <iostream>
# include <string>

class Karen{
    private:
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
    public:
        Karen(void);
        ~Karen(void);
        void    complain(std::string level);
};

#endif