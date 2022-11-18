/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:06:49 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/18 17:15:01 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b){
    T swap = a;
    a = b;
    b = swap;
}

template <typename T> T min(T &a, T &b){
    if (a < b)
        return a;
    return b;
}

template <typename T> T max(T &a, T &b){
    if (a > b)
        return a;
    return b;
}

#endif