/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 06:34:21 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/10 22:11:45 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cout << "Error argument: usage ./RPN \"expression\"" << std::endl;
        return 1;
    }
    RPN rpn;
    
    rpn.calculate(av[1]);
    return 0;
}