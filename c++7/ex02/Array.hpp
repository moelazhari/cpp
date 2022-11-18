/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:45:54 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/18 19:34:31 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template<typename T> class Array
{
    private:
        T* array;
        unsigned int size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const & src);
        ~Array();
        Array & operator=(Array const & rhs);
        T & operator[](unsigned int i);
        unsigned int Size() const;  
};

#endif