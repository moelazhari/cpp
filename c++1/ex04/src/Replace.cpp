/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:38:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/25 17:56:40 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2){
    return ;
}

Replace::~Replace(){
    return ;
}

int	Replace::replace(void){
    std::ifstream	file;
	std::ofstream	fileReplace;
	std::string		str;
    size_t		    i = 0;

    file.open(this->filename);
	if (!file.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		return (1);
	}
	fileReplace.open(std::string(this->filename).append(".replace"));
	if (!fileReplace.is_open())
	{
		std::cout << "Error: File not found" << std::endl;
		return (1);
	}
	if (this->s1 == "")
	{
		fileReplace << str;
		return (1);
	}
	getline(file, str, '\0');
	while (str.find(this->s1, i) != std::string::npos)
	{
		i = str.find(this->s1, i);
		str.erase(i , this->s1.length());
		str.insert(i, this->s2);
		i += this->s2.length();
	}
	fileReplace << str;
    return (0);
}