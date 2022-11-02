/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:34:51 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/25 15:35:57 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie	*z;
	int		 n;
	
	n = 3;
	z  = zombieHorde(n, "l3rbii");
	for (int i = 0; i < n; i++)
		z[i].announce();
	delete [] z;
	return (0);
}
