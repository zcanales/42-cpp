/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:34:09 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/18 12:34:10 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <stdexcept>

// ************************************************************************** //
//                    	   	 Basic                                             //
// ************************************************************************** //
Bureaucrat::Bureaucrat(void) : _name("Unknown"), _grade(0) {
    std::cout << "(Bureaucrat) Default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) :  _name(name) , _grade(grade) {
     std::cout << "(Bureaucrat) Parameter constructor called" << std::endl;
        if (grade < _gradeMax)
           throw GradeTooHighException();
        if (grade > _gradeMin)
           throw GradeTooLowException();
}
Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src.getName()), _grade(src.getGrade()){
    std::cout << "(Bureaucrat) Copy constructor called" << std::endl;
}
Bureaucrat::~Bureaucrat(){
    std::cout << "(Bureaucrat) Default destructor called" << std::endl;
}
// ************************************************************************** //
//                    	   	 Getters Functions                                //
// ************************************************************************** //
const std::string Bureaucrat::getName(void) const{
    return (_name);
}
int Bureaucrat::getGrade(void) const{
    return (_grade);
}
int Bureaucrat::getMaxStatic() const {
    return (_gradeMax);
}
int Bureaucrat::getMinStatic() const {
    return(_gradeMin);
}
// ************************************************************************** //
//                    	   	 Overload operators                               //
// ************************************************************************** //
Bureaucrat &Bureaucrat::operator=(Bureaucrat const & raw){
      std::cout << "(Bureaucrat) Assigment operator called" << std::endl;
    if (this != &raw)
    {
        _grade = raw.getGrade();
    }
    return (*this);

}
std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs){
    o << "Name: " << rhs.getName() << " bureaucrat. Grade: "  << rhs.getGrade() << "." ;
    return (o);
}
// ************************************************************************** //
//                    	   	 Static Variables                                 //
// ************************************************************************** //
const int Bureaucrat::_gradeMin = 150;
const int Bureaucrat::_gradeMax = 1;

// ************************************************************************** //
//                    	   	 Change grade                                    //
// ************************************************************************** //
void Bureaucrat::incremetGrade(void){
    std::cout << "[❔]Ask to increment (-1) having " << _grade << std::endl;
    if (_grade - 1 < _gradeMax)
        throw GradeTooHighException();
    else 
        _grade -= 1;
}
void Bureaucrat::decremetGrade(void){
    std::cout << "[❔]Ask to decrement (+1) having " << _grade << std::endl;
    if (_grade + 1 > _gradeMin)
        throw GradeTooLowException();
    else
        _grade += 1;
}
// ************************************************************************** //
//                    	   	 Exceptions                                      //
// ************************************************************************** //

const char *Bureaucrat::GradeTooHighException::what(void) const throw(){
    return ("[❌]Invalid grade, higher than the maximum (1)");
}
const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
    return ("[❌]Invalid grade, lower than the minimum (150)");
}
// ************************************************************************** //
//                    	   	 Sign                                             //
// ************************************************************************** //
 void Bureaucrat::signForm(AForm  & target){
    try{
        target.beSigned(*this);
        std::cout << "[📝]"<< _name << " signs " << target.getNameForm() << std::endl; 
    }
    catch (std::exception &e){
    std::cout << _name << " cannot sign " << target.getNameForm() << " because: " << e.what() <<std::endl; 
    } 
 }

 void Bureaucrat::executeForm(AForm const & form){
    try {
            form.execute(*this);
            std::cout << "[🆗]"<< _name << " executes " << form.getNameForm() << std::endl; 
     }
    catch (std::exception &e){
        std::cout << _name << " cannot executes " << form.getNameForm() << " because: " << e.what() <<std::endl;
    } 
    
 }