/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:22:25 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/10 13:03:48 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

void FragTrap::attack(std::string const & target){
	if (this->hitPoints == 0 || this->energyPoints == 0)
	{
		std::cout << "FragTrap " << this->name << " is dead" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->name << "high five" << std::endl;
}