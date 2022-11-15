/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:10:05 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:11:16 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type){
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &copy){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat &Cat::operator=(const Cat &rhs){
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat sound: meow meow" << std::endl;
}