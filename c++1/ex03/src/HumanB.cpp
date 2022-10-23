/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:44:45 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/23 10:59:58 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name){
    return ;
}

HumanB::~HumanB(){
    std::cout << this->name << " destroyed" << std::endl;
    return ;
}

void HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
    return ;
}

void    HumanB::attack(void){
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    return ;
}