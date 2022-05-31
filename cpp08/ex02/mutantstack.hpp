/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:50:50 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/04 10:50:51 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>{


    public:
        /*Bascis*/
       MutantStack<T>(void) : std::stack<T>() {
         std::cout << "(MutantStack) Default constructor called" << std::endl;
       }
       MutantStack(MutantStack<T> const & src) :  std::stack<T>(src) {
         std::cout << "(MutantStack) Copy constructor called" << std::endl;

         
       }
        ~MutantStack<T>(void){
          std::cout << "(MutantStack) Destructor called" << std::endl;
          
        };
        MutantStack<T> &operator=(MutantStack<T> const & raw){
           std::cout << "Assigment operator called" << std::endl;
            if (*this != &raw)
                *this = raw;
              return (*this);}
        /*Iterators Funcions*/
        typedef typename MutantStack<T>::container_type::iterator iterator;
        typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;
        iterator				begin(void) { 
          return (this->c.begin()); }
        /*Otra forma
        iterator            begin(void) {
          return (std::stack<T>::c.begin());
        }*/
        iterator   end(void) {
          return (this->c.end()); 
        }
        reverse_iterator    rbegin(void){
          return (this->c.rbegin());
        }
        reverse_iterator    rend(void) {
          return (this->c.rend());
        }
};

#endif
