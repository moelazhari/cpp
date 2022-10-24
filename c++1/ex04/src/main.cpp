/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:26:46 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/24 15:51:56 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "Replace.hpp"

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	Replace replace(av[1], av[2], av[3]);
	return (replace.replace());
}
