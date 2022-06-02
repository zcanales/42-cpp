/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:22:03 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/14 17:22:04 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
Cat::Cat(void) : Animal("Cat"), _brain(new Brain){
    std::cout << "(Cat) Default constructor called" << std::endl;
}

Cat::~Cat(void) {
    delete _brain;
    std::cout << "(Cat) Destructor called" << std::endl;
}
Cat::Cat(Cat const &src) : Animal("Cat"), _brain(new Brain) {
    std::cout << "(Cat) Copy constructor called" << std::endl;
    if (this != &src)
        *this = src;
}
// ************************************************************************** //
//                    	     	 Overload                                     //
// ************************************************************************** //
Cat &Cat::operator=(Cat const & raw){
     std::cout << "(Cat) Assigment operator" << std::endl;

    type = raw.getType();
    *_brain = *(raw._brain);
    return (*this);
}
// ************************************************************************** //
//                    	     	 Actions                                       //
// ************************************************************************** //
void Cat::makeSound(void) const{
    std::cout << "[🐱] Miau-miau" << std::endl;
}
std::string Cat::getIdeaBrain(int idx)
{   return (_brain->getIdea(idx));
}
void Cat::setIdeaBrain(int idx, std::string idea){
    _brain->setIdea(idx, idea);
}
