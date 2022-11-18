/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:27:26 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/18 17:29:54 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T> void iter(T *array, int length, void (*f)(T i)){
    for (int i = 0; i < length; i++)
        f(array[i]);
}

#endif