/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 06:34:25 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/11 02:27:24 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : _stack(std::stack<float>()){
    return ;
}

RPN::RPN(RPN const &lhs){
    *this = lhs;
}

RPN &RPN::operator=(RPN const &rhs){
    if (this != &rhs)
        this->_stack = rhs._stack;
    return *this;
}

RPN::~RPN(){
    return ;
}

void RPN::calculate(std::string str){
    int nb1 = 0;
    int nb2 = 0;
    float res = 0;

    for (std::string::iterator it = str.begin(), ite = str.end(); it != ite; it++)
    {
        if (isspace(*it))
            continue ;
        else if (isdigit(*it))
            this->_stack.push(*it - '0');
        else if (*it == '+' || *it == '-' || *it == '/' || *it == '*')
        {
            if (this->_stack.size() < 2)
            {
                std::cout << "Error: too many operators" << std::endl;
                return ;
            }
            nb1 = this->_stack.top();
            this->_stack.pop();
            nb2 = this->_stack.top();
            this->_stack.pop();
            if (*it == '+')
                res = nb2 + nb1;
            else if (*it == '-')
                res = nb2 - nb1;
            else if (*it == '/'){
                if (nb1 == 0)
                {
                    std::cout << "Error: division by zero" << std::endl;
                    return ;
                }
                res = (float)nb2 / nb1;
            }
            else if (*it == '*')
                res = nb2 * nb1;
            this->_stack.push(res);
        }
        else
        {
            std::cout << "Error" << std::endl;
            return ;
        }
    }
    if (this->_stack.size() != 1)
    {
        std::cout << "Error: not enough operators" << std::endl;
        return ;
    }
    std::cout << this->_stack.top() << std::endl;
}