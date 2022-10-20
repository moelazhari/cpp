/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:44:32 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/19 16:15:38 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    std::string tmp;
    if (ac == 1)
       std::cout << "" << std::endl;  
    for (int i = 1; i < ac; i++){
        tmp = av[i];
        std::transform(tmp.begin(), tmp.end(), tmp.begin(), ::toupper);
        std::cout << tmp << std::endl; 
    }
    return (0);    
}