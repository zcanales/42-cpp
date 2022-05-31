/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:34:14 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/18 12:34:15 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
class AForm;
#include "AForm.hpp"
# include <string>
# include <iostream>

class Bureaucrat
{
    private:
    const std::string _name;
    int     _grade;
    static const int _gradeMin;
    static const int _gradeMax;
public:
    //Basic functions
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(Bureaucrat const &src);
    virtual ~Bureaucrat();
    //Getters
    const std::string getName(void) const;
    int getGrade(void) const;
    int  getMaxStatic(void) const;
    int  getMinStatic(void) const;
    //Overload
    Bureaucrat &operator=(Bureaucrat const & raw);
    //Change grade
    void incremetGrade(void);
    void decremetGrade(void);

    //Sign
    void signForm(AForm  & target);
    void executeForm(AForm const & form);
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
std::ostream & operator<<(std::ostream &o, Bureaucrat const &rhs);
#endif
