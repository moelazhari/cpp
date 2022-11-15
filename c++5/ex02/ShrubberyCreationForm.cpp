/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:48:19 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/13 21:01:53 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) , target("default"){
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {
    std::cout << "ShrubberyCreationForm Constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs){
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
    *this = rhs;
    return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {
    std::cout << "ShrubberyCreationForm Assignation operator called" << std::endl;
    this->target = rhs.target;
    setSigned(rhs.getSigned());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
    return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    checkSignedGrade(executor);

    std::ofstream file(this->target + "_shrubbery");
    if (!file.is_open())
    {
        std::cout << "Error opening file" << std::endl;
        return ;
    }
    
    file << "       _-_" << std::endl;
    file << "    /~~   ~~\\" << std::endl;
    file << " //~~         ~~\\" << std::endl;
    file << "{               }" << std::endl;
    file << " \\  _-     -_  /" << std::endl;
    file << "   ~  \\ //  ~" << std::endl;
    file << "_- -   | | _- _" << std::endl;
    file << "  _ -  | |   -_" << std::endl;
    file << "      // \\" << std::endl;
    
    file.close();
}