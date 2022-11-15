/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:32:26 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:34:35 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &rhs){
    std::cout << "Brain assignation operator called" << std::endl;
    for (int i = 0; i < 100; i++)
         this->ideas[i] = rhs.ideas[i];
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}