/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/10 22:07:10 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("mazhari");
    ScavTrap scav2(scav);
    
    scav2 = scav;
    // scav.attack("l3rbi");
    // scav.takeDamage(8);
    // scav.beRepaired(5);
    // scav.guardGate();
    return (0);
}