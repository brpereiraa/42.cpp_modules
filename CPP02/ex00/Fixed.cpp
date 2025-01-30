#include "./Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fvalue = 0;
}

Fixed &Fixed::operator=(const Fixed &cp){
    if (this != &cp)
        this->fvalue = cp.getRawBits();

    return (*this);
}

Fixed::Fixed(Fixed &cp){
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fvalue);
}

void Fixed::setRawBits(int nbr) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fvalue = nbr;
}