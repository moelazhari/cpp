/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:55:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/17 17:45:40 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversion.hpp"

int main(){

    Conversion *c = new Conversion;
    
    std::cout << c << std::endl;
    
    c = deserialize(serialize(c));
    
    std::cout << c << std::endl;

    return (0); 
}