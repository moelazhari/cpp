/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:44:44 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/21 13:22:38 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
	std::string firstName;
	std::string	lastName; 
	std::string nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	public:
	Contact();
	~Contact();
	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string getDarkestSecret(void) const;
	void 		setFirstName(std::string str);
	void 		setLastName(std::string str);
	void 		setNickName(std::string str);
	void		setPhoneNumber(std::string	nbr);
	void 		setDarkestSecret(std::string str);
	void		printContact(void);
};

#endif