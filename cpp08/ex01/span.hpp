/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:46:42 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/03 12:46:43 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
#include <stdexcept>
#include <list>
#include <vector>

class Span{
    private:
        unsigned int _capacity;
        std::list<int> _lst;
    public: 
        /*Basic functions*/
        Span(void);
        Span(unsigned int capacity);
        Span(Span const &src);
        ~Span(void);
        /*Getters*/
        unsigned int    getCapacity() const ;
        int             getNumber(int idx) const ;
        int    getIdx() const ;
        /*Overload*/
        Span            &operator=(Span const & raw);
        /*Actions*/
        static int             ft_generator();
        void            addNumber(int number);
        void            addManyNumber();
        int             shortestSpan();
        int             longestSpan();
        /*Exceptions*/
        class MaxStoredReached : public std::exception{
            public:
                MaxStoredReached(){};
                virtual const char *what() const throw();
        };
        class CannotShowSpan : public std::exception{
            public:
                CannotShowSpan(){};
                virtual const char *what() const throw();
        };        
};

#endif