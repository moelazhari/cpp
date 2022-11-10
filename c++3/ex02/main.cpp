/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:29:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/09 13:28:56 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("mazhari");

    frag.attack("l3rbi");
    frag.takeDamage(8);
    frag.beRepaired(5);
    frag.highFivesGuys();

    return (0);
}