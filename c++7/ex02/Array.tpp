/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:14:34 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/18 19:34:46 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template<typename T> Array<T>::Array(): array(new T[0]), size(0){
    std::cout << "Default constructor called" << std::endl;
}

template<typename T> Array<T>::Array(unsigned int n): array(new T[n]), size(n){
    std::cout << "Constructor called" << std::endl;
}

template<typename T> Array<T>::Array(Array const & src){
    std::cout << "Copy constructor called" << std::endl;
    this->array = NULL;
    *this = src;
}

template<typename T> Array<T>::~Array(){
    std::cout << "Destructor called" << std::endl;
    delete [] array;
}

template<typename T> Array<T> & Array<T>::operator=(Array const & rhs){
    std::cout << "Assignation operator called" << std::endl;

    if (!this->array)
        delete [] array;
    array = new T[rhs.size];
    size = rhs.size;
    for (unsigned int i = 0; i < size; i++)
        array[i] = rhs.array[i];

    return *this;
}

template<typename T> T & Array<T>::operator[](unsigned int i){
    if (i >= size || i < 0)
        throw std::exception();
    return array[i];
}

template<typename T> unsigned int Array<T>::Size() const{
    return size;
}

#endif