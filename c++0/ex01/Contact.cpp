/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:52:40 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/20 18:21:10 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){
    return;
}

Contact::~Contact(void){
   return; 
}


std::string	Contact::getFirstName(void) const
{
	return (this->firstName);
}

std::string	Contact::getLastName(void) const
{
	return (this->lastName);
}

std::string	Contact::getNickName(void) const
{
	return (this->nickName);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->darkestSecret);
}

void	Contact::setFirstName(std::string str)
{
    this->firstName = str;
}

void	Contact::setLastName(std::string str)
{
    this->lastName = str;
}

void	Contact::setNickName(std::string str)
{
    this->nickName = str;
}

void	Contact::setPhoneNumber(std::string nbr)
{
    this->phoneNumber = nbr;
}

void	Contact::setDarkestSecret(std::string str)
{
    this->darkestSecret = str;
}
