/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:31:09 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/14 16:12:58 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name("default"), isSigned(false), gradeToSign(150), gradeToExecute(150){
    std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
    std::cout << "Form Constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &rhs) : name(rhs.name), isSigned(rhs.isSigned), gradeToSign(rhs.gradeToSign), gradeToExecute(rhs.gradeToExecute){
    std::cout << "Form Copy constructor called" << std::endl;
    *this = rhs;
}

Form &Form::operator=(Form const &rhs){
    std::cout << "Form Assignation operator called" << std::endl;
    this->isSigned = rhs.isSigned;
    return *this;
}

Form::~Form(){
    std::cout << "Form Destructor called" << std::endl;
}

std::string Form::getName() const{
    return this->name;
}

bool Form::getSigned() const{
    return this->isSigned;
}

void Form::setSigned(bool a){
    this->isSigned = a;
}

int Form::getGradeToSign() const{
    return this->gradeToSign;
}

int Form::getGradeToExecute() const{
    return this->gradeToExecute;
}

const char* Form::GradeTooHighException::what() const throw(){
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw(){
    return "Grade is too low";
}

const char* Form::FormNotSignedException::what() const throw(){
    return "Form is not signed";
}

void Form::beSigned(Bureaucrat const &bureaucrat){
    if (bureaucrat.getGrade() > getGradeToSign())
        throw Form::GradeTooLowException();
    std::cout << bureaucrat.getName() << " signs " << this->name << std::endl;
    setSigned(true);
}

void Form::checkSignedGrade(Bureaucrat const & executor) const{
    if (getSigned() == false)
        throw Form::FormNotSignedException();
    else if (executor.getGrade() > getGradeToExecute())
        throw Form::GradeTooLowException();
    else
        std::cout << "Form is signed and executor grade is high enough" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs){
    o << "Form name: " << rhs.getName() << std::endl;
    o << "Form signed: " << rhs.getSigned() << std::endl;
    o << "Form grade to sign: " << rhs.getGradeToSign() << std::endl;
    o << "Form grade to execute: " << rhs.getGradeToExecute();
    return o;
}