#include "./Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->fvalue = 0;
}

Fixed::Fixed(Fixed &cp){
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &cp){
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &cp)
        this->fvalue = cp.getRawBits();

    return (*this);
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fvalue);
}

void Fixed::setRawBits(int const nbr) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fvalue = nbr;
}