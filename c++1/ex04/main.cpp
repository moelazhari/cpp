/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:26:46 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/23 18:55:54 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	std::ifstream	file;
	std::ofstream	fileReplace;
	std::string		str;
	
	if (ac != 3)
	{
		std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	file.open(av[1]);
	if (!file.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		return (1);
	}
	fileReplace.open(std::string(av[1]).append(".replace"));
	if (!fileReplace.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		return (1);
	}
	while (file.good())
	{
		std::getline(file, str);
		fileReplace << str << std::endl;
	}
	return (0);
}

