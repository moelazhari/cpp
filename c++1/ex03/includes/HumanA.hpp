/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:39:11 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/23 10:22:48 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string	name;
		Weapon		&weapon;
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void    attack(void);
};

#endif