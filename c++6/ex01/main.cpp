/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:55:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/17 17:45:40 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

class Data{
    public :
        std::string name;
};

uintptr_t    serialize( Data *data ) {
    return reinterpret_cast< uintptr_t >(data);
}

Data*   deserialize(uintptr_t raw) {
    return reinterpret_cast< Data* >(raw);
}

int main( void )
{
    Data *data = new Data;
    data->name = "mazhari";

    std::cout << "Name: " << data->name << std::endl;
    std::cout << "Name: " << deserialize( serialize(data) )->name << std::endl;

    delete data;
    return (0);
}