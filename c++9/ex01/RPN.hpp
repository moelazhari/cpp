/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 06:34:27 by mazhari           #+#    #+#             */
/*   Updated: 2023/04/08 07:09:37 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<float> _stack;
    public:
    RPN();
    RPN(RPN const &lhs);
    RPN &operator=(RPN const &rhs);
    ~RPN();

    void calculate(std::string str);
};
