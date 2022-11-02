/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:25:53 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/25 13:06:41 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
    return ;
}

Harl::~Harl(){
    return ;
}

void Harl::debug(){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger."; 
    std::cout << "I really do!" << std::endl << std::endl;
    return ;
}

void Harl::info(){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money";
    std::cout << "You didn’t put enough bacon in my burger!";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
    return ;
}

void Harl::warning(){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "think I deserve to have some extra bacon for free.";
    std::cout << "’ve been coming for years whereas ";
    std::cout << "you started working here since last month." << std::endl << std::endl;
    return ;
}

void Harl::error(){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "this is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
    return ;
}

void Harl::complain(std::string level)
{
    void (Harl::*func[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            switch (i)
            {
                case 0:
                        (this->*func[0])();
                case 1:
                        (this->*func[1])();
                case 2:
                        (this->*func[2])();
                case 3:
                        (this->*func[3])();
                default: 
                    return ;
            }
        }
    }
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

