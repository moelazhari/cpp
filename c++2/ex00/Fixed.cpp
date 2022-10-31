#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &rhs){
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = rhs.fixedPoint;
}

Fixed &Fixed::operator= (const Fixed &rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &rhs)
        return *this;
    this->fixedPoint = rhs.fixedPoint;
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
    return ;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->fixedPoint = raw;
    return ;
}