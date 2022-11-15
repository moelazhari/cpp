/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:55:28 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/15 19:07:20 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int isAllDigits(std::string str)
{
    for (int i = 0; i < str.length(); i++)
        if (!isdigit(str[i]))
            return (0);
    return (1);
}


void isFloat(std::string str, char &c, int &i, float &f, double &d){
        f = std::stof(str);
        c = static_cast<char>(f);
        i = static_cast<int>(f);
        d = static_cast<double>(f);
}

void isDouble(std::string str, char &c, int &i, float &f, double &d){
        d = std::stod(str);
        c = static_cast<char>(d);
        i = static_cast<int>(d);
        f = static_cast<float>(d);
}

void isChar(std::string str, char &c, int &i, float &f, double &d){
        c = str[0];
        i = static_cast<int>(c);
        f = static_cast<float>(c);
        d = static_cast<double>(c);
}

void isInt(std::string str, char &c, int &i, float &f, double &d){
        if (!isAllDigits)
            throw std::exception();
        i = std::stoi(str);
        c = static_cast<char>(i);
        f = static_cast<float>(i);
        d = static_cast<double>(i);
}

void ft_print(char &c, int &i, float &f, double &d){
    
    if (!isprint(c))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: "<< d <<  std::endl;
}


int main(int ac, char **av){

    if (ac != 2)
    {
        std::cout << "Usage: ./a.out [string]" << std::endl;
        return (1);
    }
    
    std::string str = av[1];
    char        c;
    int         i;
    float       f;
    double      d;
    

    try {
        if (str[str.length() - 1] == 'f' && str.find('.') != std::string::npos)
            isFloat(str, c, i, f, d);
        else if (str.find('.') != std::string::npos)
            isDouble(str, c, i, f, d);
        else if (str.length() == 1 && !isdigit(str[0]))
            isChar(str, c, i, f, d);
        else
            isInt(str, c, i, f, d);
    }
    catch (std::exception &e){
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: impossible"<< std::endl;
            std::cout << "double: impossible"<< std::endl;
        return (1);
    }

    ft_print(c, i, f, d);
    return (0); 
}