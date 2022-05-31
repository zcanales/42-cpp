/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:04:42 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/18 18:04:43 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <stdexcept>
#include <string>

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
Form::Form(void) : _nameForm("Unknown"), _gradeExec(0), _gradeSign(0), _status(0) {
    std::cout << "(Form) Default constructor called" << std::endl;
}
Form::Form(std::string name, int gradeExec, int gradeSign) :  _nameForm(name), _gradeExec(gradeExec), _gradeSign(gradeSign), _status(0){
     std::cout << "(Form) Parameter constructor called" << std::endl;
        if (_gradeExec < _gradeMax || _gradeSign < _gradeMax)
           throw GradeTooHighException();
        if (_gradeExec > _gradeMin || _gradeSign > _gradeMin)
           throw GradeTooLowException();
}
Form::Form(Form const &src) : _nameForm(src.getNameForm()), _gradeExec(src.getGradeExec()), _gradeSign(src.getGradeSign()){
    std::cout << "(Form) Copy constructor called" << std::endl;
    
}
Form::~Form(void){
    std::cout << "(Form) Default destructor called" << std::endl;
}
// ************************************************************************** //
//                    	   	 Getters Functions                                //
// ************************************************************************** //
const std::string Form::getNameForm(void) const{
    return (_nameForm);
}
int Form::getGradeExec(void) const{
    return (_gradeExec);
}
int Form::getGradeSign(void) const{
    return (_gradeSign);
}
bool Form::getStatus(void) const{
    return (_status);
}
int Form::getMaxStatic() const {
    return (_gradeMax);
}
int Form::getMinStatic() const {
    return (_gradeMin);
}
// ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
Form &Form::operator=(Form const & raw){
    std::cout << "(Form) Assigment operator called" << std::endl;
    if (this != &raw)
    {
        _status = raw.getStatus();
    }
    return (*this);
}
std::ostream & operator<<(std::ostream &o, Form const &rhs){
    o << "Name: " << rhs.getNameForm() << " bureaucrat. Grade to execute: "  << rhs.getGradeExec() << ". Grade to sign: " << rhs.getGradeSign() << ". Status: " << rhs.getStatus() << ".";
    return (o);
}
// ************************************************************************** //
//                    	   	 Static Variables                                 //
// ************************************************************************** //
const int Form::_gradeMin = 150;
const int Form::_gradeMax = 1;

// ************************************************************************** //
//                    	   	 Exceptions                                      //
// ************************************************************************** //


const char *Form::GradeTooHighException::what() const throw(){
    return ("[❌] grade too high. ");
}
const char *Form::GradeTooLowException::what() const throw(){
    return ("[❌] grade too low. ");
}

// ************************************************************************** //
//                    	   	 Sign                                             //
// ************************************************************************** //
void Form::beSigned(Bureaucrat const & target){
    if (target.getGrade() > _gradeSign)
    {
        throw Form::GradeTooLowException();
    }
    this->_status = true;
}