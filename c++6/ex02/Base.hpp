/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.HPP                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:24:43 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/17 18:37:29 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base {
    public:
        virtual ~Base();
};

class A : public Base{
    public:
        ~A();
};

class B : public Base{
    public:
        ~B();
};

class C : public Base{
    public:
        ~C();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif