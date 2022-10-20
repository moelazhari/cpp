/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:44:44 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/20 19:23:35 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
	std::string firstName;
	std::string	lastName; 
	std::string nickName;
	int			phoneNumber;
	std::string	darkestSecret;
	public:
	Contact();
	~Contact();
	std::string getFirstName(void) const;
	void 		setFirstName(std::string str);
	std::string getLastName(void) const;
	void 		setLastName(std::string str);
	std::string getNickName(void) const;
	void 		setNickName(std::string str);
	int			getPhoneNumber(void) const;
	void		setPhoneNumber(int	nbr);
	std::string getDarkestSecret(void) const;
	void 		setDarkestSecret(std::string str);
};

#endif