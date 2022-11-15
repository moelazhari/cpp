/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:43:50 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 14:47:26 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "-----------------test1---------------------" << std::endl;
    {
        try{
            Bureaucrat a("l3rbi", 1);
            Bureaucrat b("mazhari", 150);
            // Bureaucrat c("mazhari", 0);
            // Bureaucrat d("mazhari", 151);
            
            std::cout << a << std::endl;
            std::cout << b << std::endl;
            // std::cout << c << std::endl;
            // std::cout << d << std::endl;
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
    }    
    std::cout << "-----------------test2---------------------" << std::endl;
    {
        Bureaucrat a("l3rbi", 1);
        Bureaucrat b("mazhari", 150);

        std::cout << a << std::endl;
        std::cout << b << std::endl;
        
        try{
            a.decrementGrade();
            b.incrementGrade();

            // a.incrementGrade();
            // b.decrementGrade();
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
        
        std::cout << a << std::endl;
        std::cout << b << std::endl;

    }
    return 0;
}
