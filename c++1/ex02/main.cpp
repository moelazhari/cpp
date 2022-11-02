/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:36:19 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/25 14:21:31 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string	*strPtr = &str;
	std::string	&strRef = str;

	std::cout << "The memory address of the strvariable: " << &str << std::endl;
	std::cout << "The memory address held by strPTR: " << strPtr << std::endl;
	std::cout << "The memory address held by strRef: " << &strRef << std::endl;
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by strPTR: "  << *strPtr << std::endl;
	std::cout << "The value pointed to by strRef: " << strRef << std::endl;

	return (0);
} 