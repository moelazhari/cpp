/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:52:52 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 15:10:33 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const & rhs){
    std::cout << "Intern copy constructor called" << std::endl;
    *this = rhs;
}

Intern &Intern::operator=(Intern const &rhs){
    std::cout << "Intern assignation operator called" << std::endl;
    (void)rhs;
    return *this;
}

Intern::~Intern() {
    std::cout << "Intern destructor called" << std::endl;
}

Form *Intern::makeForm(std::string form, std::string target) {
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *(Intern::*formPtr[3]) (std::string form, std::string target) = {&Intern::creatShrubbery, &Intern::creatRobotomy, &Intern::creatPresidential};
    for (int i = 0; i < 3; i++){
        if (form == forms[i])
            return (this->*formPtr[i])(form, target);
    }
    std::cout << "Intern can't create " << form << std::endl;
    return NULL;
}

Form *Intern::creatShrubbery(std::string form, std::string target) {
    std::cout << "Intern creates " << form << std::endl;
    return new ShrubberyCreationForm(target);
}

Form *Intern::creatRobotomy(std::string form, std::string target) {
    std::cout << "Intern creates " << form << std::endl;
    return new RobotomyRequestForm(target);
}

Form *Intern::creatPresidential(std::string form, std::string target) {
    std::cout << "Intern creates " << form << std::endl;
    return new PresidentialPardonForm(target);
}