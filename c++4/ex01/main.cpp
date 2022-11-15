/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:42:36 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 20:35:48 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    // testing shallow copy & deep copy
    {   
        Cat   cat;
        Dog   dog;
        const Cat cat1(cat);
        const Dog dog1(dog);

        dog = dog1;
        cat = cat1;
        std::cout << "dog brin address: " << dog.getBrain() << std::endl;
        std::cout << "dog1 brin address: " << dog1.getBrain() << std::endl;
        std::cout << "cat brin address: " << cat.getBrain() << std::endl;
        std::cout << "cat1 brin address: " << cat.getBrain() << std::endl;
    }
    {
        Animal *animals[4];
        for (int i = 0; i < 4; i++)
        {
            if (i % 2 == 0)
                animals[i] = new Cat();
            else
                animals[i] = new Dog();
        }
        for (int i = 0; i < 4; i++)
        {
            std::cout << "Animal " << i << " type: " << animals[i]->getType() << std::endl;
            animals[i]->makeSound();
        }
        for (int i = 0; i < 4; i++)
        {
            delete animals[i];
        }
    }
    system("leaks brain");
    return 0;
}