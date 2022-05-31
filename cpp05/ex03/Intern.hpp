/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Internn.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:49:57 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/21 13:49:58 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    public:
        Intern(void);
        ~Intern(void);
        Intern(Intern const &src);
        Intern &operator=(Intern const & raw);
        //Actions
        AForm *makeForm(std::string nameForm, std::string nameTarget);
        AForm *createPPForm(std::string nameTarget);
        AForm *createRRForm(std::string nameTarget);
        AForm *createSCForm(std::string nameTarget);
        class NotKnownForm : public std::exception{
            public:
                NotKnownForm(){};
                virtual const char *what() const throw();
        };
};

#endif