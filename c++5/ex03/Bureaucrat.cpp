/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazhari <mazhari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:36:37 by mazhari           #+#    #+#             */
/*   Updated: 2022/11/13 20:20:03 by mazhari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : name("default"), grade(150){
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){
    std::cout << "Bureaucrat Constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs) : name(rhs.name){
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = rhs;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs){
    std::cout << "Bureaucrat Assignation operator called" << std::endl;
    this->grade = rhs.grade;
    return *this;
}

Bureaucrat::~Bureaucrat(void){
    std::cout << "Bureaucrat Destructor called" << std::endl;
}

const std::string &Bureaucrat::getName() const{
    return this->name;
}

int Bureaucrat::getGrade() const{
    return this->grade;
}

void Bureaucrat::setGrade(int grade){
    this->grade = grade;
}

void Bureaucrat::incrementGrade(){
    if (this->grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->grade--;
}

void Bureaucrat::decrementGrade(){
    if (this->grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs){
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}

//----------ex01-----------
void Bureaucrat::signForm(Form &form){
    try{
        form.beSigned(*this);
        std::cout << this->name << " signs " << form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->name << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

//----------ex02-----------

void        Bureaucrat::executeForm(Form &form){
    try{
        form.execute(*this);
        std::cout << this->name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->name << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
