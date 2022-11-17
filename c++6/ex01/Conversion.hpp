/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:22:48 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/17 17:31:26 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iostream>

class Conversion
{
    private:
        char        c;
        int         i;
        float       f;
        double      d;
    public:
        Conversion();
        Conversion(std::string str);
        Conversion(Conversion const & src);
        Conversion & operator=(Conversion const & rhs);
        ~Conversion();

        bool isPseudo(std::string str);
        bool isChar(std::string str);
        bool isInt(std::string str);
        bool isFloat(std::string str);
        bool isDouble(std::string str);
        
        void convertToChar(std::string str);
        void convertToInt(std::string str);
        void convertToFloat(std::string str);
        void convertToDouble(std::string str);

        void ft_print(int i);
};

uintptr_t serialize(Conversion* ptr);
Conversion* deserialize(uintptr_t raw);

#endif