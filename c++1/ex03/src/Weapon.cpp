/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 13:37:11 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/22 14:24:37 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
    return ;
}

Weapon::Weapon(std::string type){
    this->type = type;
    return ;
}

Weapon::~Weapon(){
    return ;
}

std::string const &Weapon::getType(void){
    return (this->type);
}

void    Weapon::setType(std::string type){
    this->type = type;
    return ;
}
