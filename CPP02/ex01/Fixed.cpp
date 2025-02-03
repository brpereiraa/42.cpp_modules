#include "./Fixed.hpp"


//Constructor------------
Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fvalue = 0;
}

Fixed::Fixed(const int nbr){
    this->fvalue = (nbr << Fixed::bits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr){
    this->fvalue = roundf(nbr * (1 << Fixed::bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp){
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}


//Operator Overload------------
Fixed &Fixed::operator=(const Fixed &cp){
    if (this != &cp)
        this->fvalue = cp.getRawBits();

    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &cp){
    out << cp.toFloat();

    return (out);
}


//Member Function------------
float Fixed::toFloat(void) const {
    return (((float)this->fvalue / (float)(1 << Fixed::bits)));
}

int Fixed::toInt(void) const {
    return ((this->fvalue >> Fixed::bits));
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fvalue);
}

void Fixed::setRawBits(int nbr) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fvalue = nbr;
}