/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 10:02:40 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/02 10:02:41 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <iostream>
#include <string>
#include <stdexcept>
template<class T>
class Array{
    public:
        Array(void) : _content(NULL), _size(0) {
             std::cout << "Default constructor called" << std::endl;
        };
        Array(unsigned int n) : _size(n){
             std::cout << "Parameter constructor called" << std::endl;
             if (n != 0)
                _content = new T[n]; 
        };
        ~Array(){
            std::cout << "Destructor called" << std::endl;
           if (_size != 0)
                delete [] _content;
        };
        Array(Array const &src){
            std::cout << "Copy constructor called" << std::endl;
            if (this != &src)
            {
                _size = src.size();
                if (_size != 0)
                    _content = new T[_size]; 
                unsigned int i = 0;
                while (i < _size)
                {
                    _content[i] = src._content[i];
                    i++;
                }
            } 
        }
        Array &operator=(Array const & raw){
            std::cout << "Assigment operator called" << std::endl;
            if (this != &raw)
            {
                delete [] _content;
                _size = raw.size();
                if (_size != 0)
                    _content = new T[_size]; 
                unsigned int i = 0;
                while (i < _size)
                {
                    _content[i] = raw._content[i];
                    i++;
                }
            }
        }
        /*----EXCEPTIOM-----*/
        class outOfRange : public std::exception{
        public:
           virtual const char *what() const throw(){
               return ("Invalid position");
           }
        };
        /*----OVERLOAD-----*/
        T& operator[](unsigned int idx){
            if (idx < 0 || idx > (_size - 1))
                throw outOfRange();
            
            return (_content[idx]);
        };
        /*----MEMBER FUNCTION-----*/
        unsigned int size()const {
            return (_size);
        };
    private:
        T *_content;
        unsigned int _size;
};
#endif

