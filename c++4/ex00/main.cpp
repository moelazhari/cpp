/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:52:12 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:27:54 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(){
    // whit virtual function
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << "---------------------------------" << std::endl;
    // without virtual function

    const WrongAnimal* Wmeta = new WrongAnimal();
    const WrongAnimal* Wj = new WrongCat();

    std::cout << Wj->getType() << " " << std::endl;
    Wj->makeSound();
    Wmeta->makeSound();

    delete Wmeta;
    delete Wj;
    return 0;
}