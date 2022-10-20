/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:30:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/20 19:14:07 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    this->indax = 0;
    return;
}

PhoneBook::~PhoneBook(){
    return;
}

void    PhoneBook::add(void){

    std::string buffer;
    while (1)
    {
        std::cout << "First Name: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            return ;
        if (buffer.length() > 0){
            this->contacts[this->indax].setFirstName(buffer);
            break ;
        }
        std::cout << "Please enter a valid name" << std::endl;
    }
    while (1)
    {
        std::cout << "Last Name: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            return ;
        if (buffer.length() > 0){
            this->contacts[this->indax].setLastName(buffer);
            break ;
        }
        std::cout << "Please enter a valid name" << std::endl;
    }
    while (1)
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            return ;
        if (buffer.length() > 0){
            this->contacts[this->indax].setNickName(buffer);
            break ;
        }
        std::cout << "Please enter a valid name" << std::endl;
    }
    while (1)
    {
        int         n;

        n = 0;
        std::cout << "Phone Number: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            return ;
        for (size_t i = 0; i < buffer.length(); i++)
        {
            if (!isdigit(buffer[i]))
            {
                n = 1;
                break ;
            }
        }
        if (buffer.length() > 0 && n == 0){
            this->contacts[this->indax].setPhoneNumber(buffer);
            break ;
        }
        std::cout << "Please enter a valid name" << std::endl;
    }
    while (1)
    {
        std::cout << "Darkest Secret: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            return ;
        if (buffer.length() > 0){
            this->contacts[this->indax].setDarkestSecret(buffer);
            break ;
        }
        std::cout << "Please enter a valid name" << std::endl;
    }
    indax++;
    if (indax == 8)
        indax = 0;
    std::cout <<  "Contact added successfully " << std::endl;
    return ;    
}

