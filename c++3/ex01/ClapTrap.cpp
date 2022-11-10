/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:14 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/10 13:10:47 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("default"), hitPoints(100), energyPoints(50), attackDamage(20){
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100), energyPoints(50), attackDamage(20){
    std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &rhs){
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    this->name = rhs.name;
    this->hitPoints = rhs.hitPoints;
    this->energyPoints = rhs.energyPoints;
    this->attackDamage = rhs.attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(void){
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target){
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount){
    if ((this->hitPoints -= amount) <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        this->hitPoints = 0;   
        return ;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is dead" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints--;
}