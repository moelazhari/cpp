/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:27:09 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/13 13:11:35 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
    private:
        std::string const	name;
        int					grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & rhs);
        Bureaucrat & operator=(Bureaucrat const & rhs);
        ~Bureaucrat(void);
        const std::string &getName() const;
        int         getGrade() const;
        void        setGrade(int grade);
        void        incrementGrade();
        void        decrementGrade();
        class GradeTooHighException : public std::exception
        {
            public:
               const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};    

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif