/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:34:57 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/22 11:34:58 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
    return ;
}

Zombie::~Zombie(){
	std::cout << this->name << " destroyed" << std::endl;
	return ;
}

void	Zombie::announce(){
	std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::setName(std::string name){
	this->name = name;
	return ;
}
