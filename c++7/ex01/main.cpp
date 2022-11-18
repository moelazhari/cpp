/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:31:05 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/18 17:35:39 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T>  void print(T i){
    std::cout << i << std::endl;
}

int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    iter(array, 5, &print);
    
    std::string array2[5] = {"hello", "world", "this", "is", "c++"};
    iter(array2, 5, &print);
    return 0;
}