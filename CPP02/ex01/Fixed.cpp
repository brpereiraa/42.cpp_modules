#include "./Fixed.hpp"
#include <cmath>

Fixed::Fixed(){ 
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.value;
}

Fixed::Fixed(const int nbr){
  std::cout << "Int constructor called" << std::endl;
  this->value = nbr;
}

Fixed::Fixed(const float nbr){
  std::cout << "Float constructor called" << std::endl;
  this->value = roundf(nbr * (1 << Fixed::value));
}

Fixed::~Fixed(){ std::cout << "Destructor called" << std::endl; };

Fixed &Fixed::operator=(const Fixed &f){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this == &f)
		return (*this);
	this->value = f.value;
	return (*this);	
}

int	Fixed::getRawBits(){ 
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value); 
};

void	Fixed::setRawBits(int value){ 
	std::cout << "setRawBits member function called" << std::endl;
	this->value = value;
};

int Fixed::toInt(void) const {
  return ((this->value)/(1 << Fixed::fbits));
}

float Fixed::toFloat(void) const {
  return ((float)this->value/(float)(1 << Fixed::fbits));
}
