/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:44:02 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:06:58 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &copy){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &rhs){
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
    return (this->type);
}

void Animal::setType(std::string type){
    this->type = type;
}

void Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}