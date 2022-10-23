/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:34:44 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/22 11:31:25 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int    main(){
    Zombie*	zombie = newZombie("l3rbii");
    zombie->announce();
    randomChump("mazhari");
    delete zombie;
    return (0);
}