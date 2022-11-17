/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:25:46 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/17 18:50:56 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){
    return ;
}

A::~A(){
    return ;
}

B::~B(){
    return ;
}

C::~C(){
    return ;
}

Base *generate(void){
    int i = time(NULL) % 3;

    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

// void identify(Base* p){
//     if (dynamic_cast<A*>(p))
//         std::cout << "A" << std::endl;
//     else if (dynamic_cast<B*>(p))
//         std::cout << "B" << std::endl;
//     else if (dynamic_cast<C*>(p))
//         std::cout << "C" << std::endl;
//     else
//         std::cout << "Unknown" << std::endl;
// }

void identify(Base& p){
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

