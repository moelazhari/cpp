/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:42 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/25 13:09:04 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    if (ac != 2)
    {
        std::cout << "Usage: ./harlFilter [level]" << std::endl;
        return (1);
    }
    Harl harl;
    harl.complain(av[1]);
    return 0;
}
