/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:34:25 by mazhari           #+#    #+#             */
/*   Updated: 2022/10/24 15:48:39 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

class Replace
{
    private:
        std::string     filename;
	    std::string		s1;
	    std::string		s2;
    public:
        Replace(std::string filename, std::string s1, std::string s2);
        ~Replace();
        int replace(void);
};
