/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:37:42 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 14:23:19 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(){
    PhoneBook   phnebook;
    std::string buffer;
    
    while (true)
    {
        std::cout << "enter a command: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof() || buffer == "EXIT" || buffer == "exit")
            break ;
        else if (buffer == "ADD" || buffer == "add")
            phnebook.add();
        else if (buffer == "SEARCH" || buffer == "search")
            phnebook.search();
        else
            std::cout << "command not found" << std::endl;
        if (std::cin.eof())
            break ;
    }
    return (0);
}