/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:55:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/16 16:38:42 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

int main(int ac, char **av){

    Conversion c;

    if (ac != 2)
    {
        std::cout << "Usage: ./a.out [string]" << std::endl;
        return (1);
    }

    try {
        if (c.isPseudo(av[1]))
            return (0);
        if (c.isChar(av[1]))
            c.convertToChar(av[1]);
        else if (c.isInt(av[1]))
            c.convertToInt(av[1]);
        else if (c.isFloat(av[1]))
            c.convertToFloat(av[1]);
        else if (c.isDouble(av[1]))
            c.convertToDouble(av[1]);
        else
        {
            c.ft_print(1);
            return (1);
        }
    }
    catch(const std::exception& e){
            c.ft_print(1);
            return (1);
    }
    c.ft_print(0);
    return (0); 
}