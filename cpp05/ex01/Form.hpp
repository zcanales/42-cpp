/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:04:46 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/18 18:04:47 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
class Bureaucrat;
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class Form
{
private:
    const std::string   _nameForm;
    const int           _gradeExec;
    const int           _gradeSign;
    bool                _status;
    static const int    _gradeMin;
    static const int    _gradeMax;
public:
    //Basic functions
    Form(void);
    Form(std::string name, int gradeExec, int gradeSign);
    Form(Form const &src);
    ~Form(void);
    //Getters
    const std::string getNameForm(void) const;
    int getGradeExec(void) const;
    int getGradeSign(void) const;
    bool getStatus(void) const;
    int getMaxStatic() const ;
    int getMinStatic() const ;
    //Overload
    Form &operator=(Form const & raw);
    //Signed
    void beSigned(Bureaucrat const & target);
    //Exceptions
    class GradeTooHighException : public std::exception{
        public:
            GradeTooHighException(){};
           virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
        public:
            GradeTooLowException(){};
           virtual const char *what() const throw();
    };
};
std::ostream & operator<<(std::ostream &o, Form const &rhs);
#endif