/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:50:24 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/04 10:50:25 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
/*template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
    //std::cout << "(MutantStack) Default constructor called" << std::endl;
    return ;
}*/
/*template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &src) : std::stack<T>(src){
    std::cout << "(MutantStack) Copy constructor called" << std::endl;
}*/
/*template<typename T>
MutantStack<T>::~MutantStack(void){
    //std::cout << "(MutantStack) Destructor called" << std::endl;
    return ;
}*/
/*
// ************************************************************************** //
//                    	   	 Overload operator                                //
// ************************************************************************** //
template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const & raw){
    std::cout << "Assigment operator called" << std::endl;
    if (*this != &raw)
    {
        *this = raw;
    }
    return (*this);
}
// ************************************************************************** //
//                    	     Iterators                                        //
// ************************************************************************** //
template<typename T>
typename MutantStack<T>::iterator   MutantStack<T>::begin(void) {
    return (this->c.begin());
}
template<typename T>
typename MutantStack<T>::iterator   MutantStack<T>::end(void) const {
    return (this->c.end());
}
template<typename T>
typename MutantStack<T>::reverse_iterator    MutantStack<T>::rbegin(void) const {
    return (this->c.begin());
}
template<typename T>
typename MutantStack<T>::reverse_iterator    MutantStack<T>::rend(void) const {
    return (this->c.cend());
}
*/