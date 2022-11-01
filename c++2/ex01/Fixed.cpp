#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPoint(0){
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const int nbr) : fixedPoint(nbr << fracBits){
    std::cout << "Int constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const float nbr) : fixedPoint((int)roundf(nbr * (1 << fracBits))){
    std::cout << "Float constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &rhs){
    std::cout << "Copy constructor called" << std::endl;
    this->fixedPoint = rhs.getRawBits();
}

Fixed &Fixed::operator= (const Fixed &rhs){
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = rhs.getRawBits();
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

float Fixed::toFloat(void) const{
    return ((float)this->fixedPoint / (1 << fracBits));
}

int Fixed::toInt(void) const{
    return (this->fixedPoint >> fracBits);
}

std::ostream& operator<< (std::ostream &out, const Fixed &rhs){
    out << rhs.toFloat();
    return out;
}