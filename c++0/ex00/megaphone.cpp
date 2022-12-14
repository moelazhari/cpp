/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:44:32 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 14:25:03 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    for (int i = 1; i < ac; i++)
    {
        for (size_t j = 0; j < strlen(av[i]); j++)
            av[i][j] = toupper(av[i][j]);
        std::cout << av[i];
    }
    std::cout << std::endl;
    return (0);  
}