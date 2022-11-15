/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:02:12 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:50:45 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog(void);
        Dog(std::string type);
        Dog(const Dog &copy);
        Dog &operator=(const Dog &rhs);
        ~Dog();
        Brain *getBrain(void) const;
        void   setBrain(Brain *brain);
        void    makeSound() const;
};

#endif