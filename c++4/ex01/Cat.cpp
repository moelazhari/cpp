/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:10:05 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 20:35:31 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat Default constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type){
    std::cout << "Cat constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy){
    std::cout << "Cat copy constructor called" << std::endl;
    this->brain = NULL;
    *this = copy;
}

Cat &Cat::operator=(const Cat &rhs){
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = rhs.type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*rhs.brain);
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Brain *Cat::getBrain() const{
    return (this->brain);
}

void Cat::setBrain(Brain *brain){
    this->brain = brain;
}

void Cat::makeSound() const{
    std::cout << "Cat sound: meow meow" << std::endl;
}