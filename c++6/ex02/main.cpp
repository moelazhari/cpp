/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:30:12 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/17 18:57:29 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

class  D : public Base{};

int main(){
    Base *b = generate();
    
    Base *d = new D;

    
    identify(b);
    identify(*b);

    identify(d);
    identify(*d);
    
    delete b;
    return (0);
}