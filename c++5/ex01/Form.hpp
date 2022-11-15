/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:20:57 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 15:01:59 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
    private:
        std::string const name;
        bool              isSigned;
        int const         gradeToSign;
        int const         gradeToExecute;
    public:
        Form(void);
        Form(std::string name, int gradeToSign, int gradeToExecute);
        Form(Form const & rhs);
        Form &operator=(Form const &rhs);
        ~Form();
        std::string getName() const;
        bool        getSigned() const;
        void        setSigned(bool a);
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
        void        beSigned(Bureaucrat const & bureaucrat);
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<<(std::ostream & o, Form const &rhs);

#endif