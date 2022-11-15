/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brian.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:31:57 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/11 14:32:21 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain &copy);
        Brain &operator=(const Brain &rhs);
        ~Brain();
};

#endif