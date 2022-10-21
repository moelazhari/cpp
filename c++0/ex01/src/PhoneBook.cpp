/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:30:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/21 13:21:41 by mazhari          ###   ########.fr       */
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
            this->contacts[this->indax % 8].setFirstName(buffer);
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
            this->contacts[this->indax % 8].setLastName(buffer);
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
            this->contacts[this->indax % 8].setNickName(buffer);
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
            this->contacts[this->indax % 8].setPhoneNumber(buffer);
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
            this->contacts[this->indax % 8].setDarkestSecret(buffer);
            break ;
        }
        std::cout << "Please enter a valid name" << std::endl;
    }
    this->indax++;
    std::cout <<  "Contact added successfully " << std::endl;
    return ;    
}

void    printStr(std::string str)
{
     if (str.length() > 10)
            std::cout << '|' << str.substr(0, 9) << '.';  
     else
            std::cout << '|' << std::setw(10) << str;
}


void PhoneBook::search(void){
    std::cout << '|' << std::setw(10) << "index" << '|' << std::setw(10) << "first name"
    << '|' << std::setw(10) << "last name" << '|' << std::setw(10) << " nickname"
    << '|' << std::endl;
    this->indax = this->indax > 8 ? 8 : this->indax;
    for (int i = 0; i < this->indax; i++)
    {
        std::cout << '|' << std::setw(10) << i + 1;
        printStr(this->contacts[i].getFirstName());
        printStr(this->contacts[i].getLastName());
        printStr(this->contacts[i].getNickName());
        std::cout << '|' << std::endl;
    }
    while (1337)
    {
        std::string buffer;

        std::cout << "Enter the index of the contact you want to see: ";
        std::getline(std::cin, buffer);
        if (std::cin.eof())
            return ;
        if (buffer.length() != 1 || buffer[0] < '1' || buffer[0] > '8')
            std::cout << "Please enter a valid index" << std::endl;
        else{
            this->contacts[buffer[0] - '1'].printContact();
            break ;
        }
    }
}
