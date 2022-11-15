/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:50:01 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 14:09:30 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const & rhs);
        Intern &operator=(Intern const &rhs);
        ~Intern();
        Form *creatShrubbery(std::string form, std::string target);
        Form *creatRobotomy(std::string form, std::string target);
        Form *creatPresidential(std::string form, std::string target);
        Form *makeForm(std::string form, std::string target);
};

#endif