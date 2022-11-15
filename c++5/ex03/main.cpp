/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:43:50 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 13:53:24 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"


int main(void)
{   
    Bureaucrat l3rbi("l3rbi", 1);
    Bureaucrat mazhari("mazhari", 150);

    {
        Intern someRandomIntern;
        Form* rrf;
        std::cout << "----------------------------------------" << std::endl;
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        l3rbi.signForm(*rrf);
        l3rbi.executeForm(*rrf);
        delete rrf;
        std::cout << "----------------------------------------" << std::endl;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        l3rbi.signForm(*rrf);
        l3rbi.executeForm(*rrf);
        delete rrf;
        std::cout << "----------------------------------------" << std::endl;
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        l3rbi.signForm(*rrf);
        l3rbi.executeForm(*rrf);
        delete rrf;
    }
    
    return 0;
}
