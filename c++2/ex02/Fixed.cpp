#include "Fixed.hpp"

const int Fixed::fracBits = 8;

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


bool Fixed::operator> (const Fixed &rhs) const{
    return (this->fixedPoint > rhs.getRawBits());
}

bool Fixed::operator< (const Fixed &rhs) const{
    return (this->fixedPoint < rhs.getRawBits());
}

bool Fixed::operator>= (const Fixed &rhs) const{
    return (this->fixedPoint >= rhs.getRawBits());
}

bool Fixed::operator<= (const Fixed &rhs) const{
    return (this->fixedPoint <= rhs.getRawBits());
}

bool Fixed::operator== (const Fixed &rhs) const{
    return (this->fixedPoint == rhs.getRawBits());
}

bool Fixed::operator!= (const Fixed &rhs) const{
    return (this->fixedPoint != rhs.getRawBits());
}

Fixed Fixed::operator+ (const Fixed &rhs) const{
    return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator- (const Fixed &rhs) const{
    return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator* (const Fixed &rhs) const{
    return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/ (const Fixed &rhs) const{
    return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator++ (void){
    ++(this->fixedPoint);
    return *this;
}

Fixed Fixed::operator++ (int){
    Fixed tmp(*this);
    ++(*this);
    return tmp;
}

Fixed &Fixed::operator-- (void){
    --(this->fixedPoint);
    return *this;
}

Fixed Fixed::operator-- (int){
    Fixed tmp(*this);
    --(*this);
    return tmp;
}

int Fixed::getRawBits(void) const{
    return (this->fixedPoint);
}

void Fixed::setRawBits(int const raw){
    this->fixedPoint = raw;
    return ;
}

float Fixed::toFloat(void) const{
    return ((float)this->fixedPoint / (1 << fracBits));
}

int Fixed::toInt(void) const{
    return (this->fixedPoint >> fracBits);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    return (a > b ? a : b);
}

std::ostream& operator<< (std::ostream &out, const Fixed &rhs){
    out << rhs.toFloat();
    return out;
}

