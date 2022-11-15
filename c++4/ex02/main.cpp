/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:42:36 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 20:46:27 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    // Animal Animal;
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

    system("leaks abstract");
    return 0;
}