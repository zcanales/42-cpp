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

#ifndef AFORM_HPP
# define AFORM_HPP
class Bureaucrat;
# include "Bureaucrat.hpp"
# include <string>
# include <iostream>

class AForm
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
        AForm(void);
        AForm(std::string name, int gradeExec, int gradeSign);
        AForm(AForm const &src);
        virtual ~AForm(void);
        //Getters
        const std::string   getNameForm(void) const;
        int                 getGradeExec(void) const;
        int                 getGradeSign(void) const;
        bool                getStatus(void) const;
        //Overload
        AForm&               operator=(AForm const & raw);
        //Acctions
        void                beSigned(Bureaucrat const & target);
        virtual void        execute(Bureaucrat const & executor) const;
        virtual void        action(Bureaucrat const &executor) const = 0;
        //Exceptions
        class GradeTooHighException : public std::exception{
            public:
               GradeTooHighException(){};
               virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                GradeTooLowException() {};
               virtual const char *what() const throw();
        }; 
        class NotSignYet : public std::exception{
            public:
                NotSignYet(){};
                virtual const char *what() const throw();
        }; 
};
std::ostream & operator<<(std::ostream &o, AForm const &rhs);
#endif