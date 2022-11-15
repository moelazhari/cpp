/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:03:44 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:09:12 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type){
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &rhs){
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = rhs.type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Dog sound: bark bark" << std::endl;
}
