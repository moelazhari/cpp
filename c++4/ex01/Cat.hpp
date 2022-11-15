/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:09:33 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:52:22 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat(void);
        Cat(std::string type);
        Cat(const Cat &copy);
        Cat &operator=(const Cat &rhs);
        ~Cat(void);
        Brain *getBrain(void) const;
        void   setBrain(Brain *brain);
        void makeSound() const;
};

#endif