/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:27:47 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/17 17:33:36 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() : c(0), i(0), f(0.0), d(0.0){
    return ;
}

Conversion::Conversion(Conversion const & src){
    *this = src;
    return ;
}

Conversion & Conversion::operator=(Conversion const & rhs){
    this->c = rhs.c;
    this->i = rhs.i;
    this->f = rhs.f;
    this->d = rhs.d;
    return *this;
}

Conversion::~Conversion(){
    return ;
}

bool Conversion::isChar(std::string str){
    if (str.length() == 1 && !isdigit(str[0]))
        return true;
    return false;
}

bool Conversion::isPseudo(std::string str){
    if (str != "nan" && str != "nanf" && str != "+inf" 
    && str != "-inf" && str != "+inff" && str != "-inff")
        return false;
    
    this->f = std::stof(str);
    this->d = std::stod(str);

    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << this->f << "f" << std::endl;
    std::cout << "double: " << this->d << std::endl;
    return true;
}

bool Conversion::isInt(std::string str){
    size_t i = 0;


    while (str[i] == '+' || str[i] == '-')
        i++;
    if (i == str.length())
        return false;
    while (i < str.length()){
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

bool  Conversion::isFloat(std::string str){
    size_t i = 0;
    int dot = 0;

    if (str.find('.') == std::string::npos || str.find('.') == str.length() - 1 
        || str.find('.') == 0 || str.find('f') != str.length() - 1)
        return false;
    while (str[i] == '+' || str[i] == '-')
        i++;
    if (i == str.length())
        return false;
    while (i < str.length() - 1){
        if (!isdigit(str[i]) && str[i] != '.')
            return false;
        if (str[i] == '.')
            dot++;
        i++;
    }
    if (dot > 1)
        return false;
    return true;
}

bool  Conversion::isDouble(std::string str){
    size_t i = 0;
    int dot = 0;

    if (str.find('.') == std::string::npos || str.find('.') == str.length() - 1 
        || str.find('.') == 0)
        return false;
    while (str[i] == '+' || str[i] == '-')
        i++;
    if (i == str.length())
        return false;
    while (i < str.length()){
        if (!isdigit(str[i]) && str[i] != '.')
            return false;
        if (str[i] == '.')
            dot++;
        i++;
    }
    if (dot > 1)
        return false;
    return true;
}

void Conversion::convertToChar(std::string str){
        this->c = (str[0]);
        this->i = static_cast<int>(this->c);
        this->f = static_cast<float>(this->c);
        this->d = static_cast<double>(this->c);
}

void Conversion::convertToInt(std::string str){
        this->i = std::stoi(str);
        this->c = static_cast<char>(this->i);
        this->f = static_cast<float>(this->i);
        this->d = static_cast<double>(this->i);
}

void Conversion::convertToFloat(std::string str){
        str = "nan";
        this->f = std::stof("str");
        this->c = static_cast<char>(this->f);
        this->i = static_cast<int>(this->f);
        this->d = static_cast<double>(this->f);
}

void Conversion::convertToDouble(std::string str){
        this->d = std::stod(str);
        this->c = static_cast<char>(this->d);
        this->i = static_cast<int>(this->d);
        this->f = static_cast<float>(this->d);
}


void Conversion::ft_print(int i){
    if (!i)
    {
        if (this->c < 32 || this->c > 126)
            std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: '" << this->c << "'" << std::endl;
        std::cout << "int: " << this->i << std::endl;
        std::cout << "float: " << this->f << "f" << std::endl;
        std::cout << "double: " << this->d << std::endl;
    }
    else if (i == 1)
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
    }
}

uintptr_t serialize(Conversion* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Conversion* deserialize(uintptr_t raw){
    return reinterpret_cast<Conversion* >(raw);
}