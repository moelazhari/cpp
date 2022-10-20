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

int PhoneBook::add(void){

    std::string buffer;
    
    std::cout <<  "first name: ";
    std::cin >> buffer;
    if (buffer.length() < 1){
       std::cout <<  "Error first name is Empty ";
       return (1);
    }
    contacts[indax].set
    
    
}

