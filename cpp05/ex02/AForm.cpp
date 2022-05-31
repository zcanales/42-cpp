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

#include "AForm.hpp"
#include <stdexcept>
#include <string>

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
AForm::AForm(void) : _nameForm("Unknown"), _gradeExec(0), _gradeSign(0), _status(0) {
    std::cout << "(AForm) Default constructor called" << std::endl;
}
AForm::AForm(std::string name, int gradeExec, int gradeSign) :  _nameForm(name), _gradeExec(gradeExec), _gradeSign(gradeSign), _status(0){
     std::cout << "(AForm) Parameter constructor called" << std::endl;
        if (gradeExec < _gradeMax || _gradeSign < _gradeMax)
           throw GradeTooHighException();
        if (gradeExec > _gradeMin || _gradeSign > _gradeMin)
           throw GradeTooLowException();
}
AForm::AForm(AForm const &src) :  _nameForm(src.getNameForm()), _gradeExec(src.getGradeExec()), _gradeSign(src.getGradeSign()), _status(src.getStatus()){
    std::cout << "(AForm) Copy constructor called" << std::endl;
}
AForm::~AForm(void){
    std::cout << "(AForm) Default destructor called" << std::endl;
}
// ************************************************************************** //
//                    	   	 Getters Functions                                //
// ************************************************************************** //
const std::string AForm::getNameForm(void) const{
    return (_nameForm);
}
int AForm::getGradeExec(void) const{
    return (_gradeExec);
}
int AForm::getGradeSign(void) const{
    return (_gradeSign);
}
bool AForm::getStatus(void) const{
    return (_status);
}
// ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
AForm &AForm::operator=(AForm const & raw){
    std::cout << "(AForm) Assigment operator called" << std::endl;
    if (this != &raw)
    {
        _status = raw.getStatus();
    }
    return (*this);
}
std::ostream & operator<<(std::ostream &o, AForm const &rhs){
    o << "Name: " << rhs.getNameForm() << " form. Grade to execute: "  << rhs.getGradeExec() << ". Grade to sing: " << rhs.getGradeSign() << ". Status:" << rhs.getStatus() << ".";
    return (o);
}
// ************************************************************************** //
//                    	   	 Static Variables                                 //
// ************************************************************************** //
const int AForm::_gradeMin = 150;
const int AForm::_gradeMax = 1;

// ************************************************************************** //
//                    	   	 Exceptions                                      //
// ************************************************************************** //
const char *AForm::GradeTooHighException::what() const throw(){
    return ("[❌]Grade is too high. ");
}
const char *AForm::GradeTooLowException::what() const throw(){
    return ("[❌]Grade is too low. ");
}
const char *AForm::NotSignYet::what() const throw(){
    return ("[❌]Is not signed yet. ");
}
// ************************************************************************** //
//                    	   	 Actions                                            //
// ************************************************************************** //
void AForm::beSigned(Bureaucrat const & target){
    if (target.getGrade() > _gradeSign)
    {
        throw AForm::GradeTooLowException();
    }
    _status = true;
}
void   AForm::execute(Bureaucrat const & executor) const{
    if (getStatus() != 1 )
    { 
        throw AForm::NotSignYet();
    }
    if (executor.getGrade() > getGradeExec())
    {  
        throw AForm::GradeTooLowException();
    }
    action(executor);
}