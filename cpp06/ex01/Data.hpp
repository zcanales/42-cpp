/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:24:32 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/25 19:24:32 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP
# define DATA_HPP
# include <string>
class Data{
    private:
        int _dataInt;
        bool _databool;
        std::string _dataString;
    public:
        Data();
        Data(std::string data);
        Data(bool data);
        Data(int data);
        ~Data();
        int         getDataInt()const ;
        std::string getDataString()const ;
        bool        getDataBool()const ;
};
uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif

