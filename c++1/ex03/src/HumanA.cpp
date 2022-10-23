/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:44:45 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/23 10:25:13 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :name(name), weapon(weapon){
    return ;
}

HumanA::~HumanA(){
    std::cout << this->name << " destroyed" << std::endl;
    return ;
}

void    HumanA::attack(void){
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
    return ;
}