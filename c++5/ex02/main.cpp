/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:43:50 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 15:23:37 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{   
    Bureaucrat l3rbi("l3rbi", 1);
    Bureaucrat mazhari("mazhari", 150);

    std::cout << "--------------------test1---------------------" << std::endl;
    {
        ShrubberyCreationForm  form("test");
        try {
            l3rbi.signForm(form);
            // mazhari.signForm(form);
            
            // form.execute(mazhari);
            form.execute(l3rbi);
            
            // l3rbi.executeForm(form);
            // mazhari.executeForm(form);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------------------test2---------------------" << std::endl;
    {
        RobotomyRequestForm  form("test");
        try {
            // l3rbi.signForm(form);
            // mazhari.signForm(form);
            
            // form.execute(mazhari);
            form.execute(l3rbi);
            
            // l3rbi.executeForm(form);
            // mazhari.executeForm(form);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "--------------------test3---------------------" << std::endl;
    {
        PresidentialPardonForm form("test");
        try {
            // l3rbi.signForm(form);
            // mazhari.signForm(form);
            
            // form.execute(mazhari);
            form.execute(l3rbi);
            
            // l3rbi.executeForm(form);
            // mazhari.executeForm(form);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "-----------------------------------------" << std::endl;
    return 0;
}
