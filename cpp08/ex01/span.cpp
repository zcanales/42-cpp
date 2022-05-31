/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:46:35 by zcanales          #+#    #+#             */
/*   Updated: 2022/03/03 12:46:36 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "span.hpp"
#include <algorithm>
#include <cmath>
#include <time.h>

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
Span::Span(void) : _capacity(0) {
    std::cout << "(Span) Default constructor called" << std::endl;
    _lst.clear();
    }
Span::Span(unsigned int capacity) : _capacity(capacity) {
     std::cout << "(Span) Parameter constructor called" << std::endl;
    _lst.clear();
}
Span::Span(Span const &src){
    std::cout << "(Span) Copy constructor called" << std::endl;
    *this = src;
}
Span::~Span(){
    std::cout << "(Span) Default destructor called" << std::endl;
    _lst.clear();
}
// ************************************************************************** //
//                    	   	 Getters Functions                                //
// ************************************************************************** //
unsigned int    Span::getCapacity() const {
    return (_capacity);
}
int    Span::getIdx() const {
    return (_lst.size());
}
// ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
Span&Span::operator=(Span const & raw){
    if (this != &raw)
    {
        _lst.clear();
       _capacity = raw._capacity;
       _lst = raw._lst;
    }
    return (*this);
}
// ************************************************************************** //
//                    	        	 Actions                                  //
// ************************************************************************** //
void Span::addNumber(int number){
    if (_capacity == _lst.size())
        throw MaxStoredReached();
    _lst.push_back(number);
}
int Span::ft_generator(){

    int w = rand() % 20000;
 	return w; 
};
void Span::addManyNumber(){
    std::vector<int> v(_capacity);
    std::generate_n(v.begin(), _capacity, ft_generator);
	std::list<int>::iterator it = _lst.begin();
	_lst.insert(it,v.begin(),v.end());

}

int  Span::shortestSpan(){
   if (_lst.size() == 0 || _lst.size() == 1) 
        throw CannotShowSpan();
    std::list<int>::iterator it;
    int shortRange = std::numeric_limits<int>::max();
    int temp = 0 ;
    _lst.sort();
    it = _lst.begin();
    while (it != --_lst.end())
    {
        temp = abs(*it - (*(++it)));
        if (temp < shortRange)
            shortRange = temp;
    } 
    

    return (shortRange);
}
int Span::longestSpan(){
    if (_lst.size() == 0 || _lst.size() == 1)
        throw CannotShowSpan();
    int max = *std::max_element(_lst.begin(), _lst.end());
    int min = *std::min_element(_lst.begin(), _lst.end());
   // std::cout << "max: " << max << " min: " << min << "size: "<<  _lst.size() << std::endl;
    return(abs(max - min));    
}
// ************************************************************************** //
//                    	          Exceptions                                  //
// ************************************************************************** //
const char *Span::MaxStoredReached::what(void) const throw(){
    return ("[❌]There are not space free to insert number");
}
const char *Span::CannotShowSpan::what(void) const throw(){
    return ("[❌]Cannot show, there are no numbers stored or there are only one.");
}
