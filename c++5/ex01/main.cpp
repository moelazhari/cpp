/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:43:50 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 16:15:53 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    // std::cout << "--------------------test1---------------------" << std::endl;
    // {
    //     try {
    //         Form form1("form1", 1, 1);
    //         Form form2("form2", 100, 100);

    //         // Form form3("test3", 0, 0);
    //         // Form form4("test4", 151, 151);
            
    //         std::cout << form1 << std::endl;
    //         std::cout << form2 << std::endl;
    //     }
    //     catch (std::exception &e) {
    //         std::cout << e.what() << std::endl;
    //     }
    // }
    std::cout << "--------------------test2---------------------" << std::endl;
    {
        Bureaucrat a("l3rbi", 1);
        Form form1("test", 1, 1);
        Form form2("test2", 100, 100);

        std::cout << a << std::endl;
        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
        
        try {
            form1.beSigned(a);
            a.signForm(form2);
        }
        catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        
        std::cout << "----------------" << std::endl;

        std::cout << form1 << std::endl;
        std::cout << form2 << std::endl;
    }
    std::cout << "--------------------test3---------------------" << std::endl;
    // {
    //     Bureaucrat mazhari("mazhari", 150);
    //     Form form1("test", 1, 1);
    //     Form form2("test2", 100, 100);

    //     std::cout << mazhari << std::endl;
    //     std::cout << form1 << std::endl;
    //     std::cout << form2 << std::endl;
        
    //     try {
    //         form1.beSigned(mazhari);
    //         mazhari.signForm(form2);
    //     }
    //     catch (std::exception &e) {
    //         std::cout << e.what() << std::endl;
    //     }
        
    //     std::cout << "----------------" << std::endl;

    //     std::cout << mazhari << std::endl;
    //     std::cout << form1 << std::endl;
    //     std::cout << form2 << std::endl;
    // }
    return 0;
}
