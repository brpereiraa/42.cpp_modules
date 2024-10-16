#include "./Fixed.hpp"

Fixed::Fixed(){ std::cout << "Default constructor called" << std::endl; };

Fixed::Fixed(Fixed &fixed){
	std::cout << "Copy constructor called" << std::endl;
	this->value = fixed.value;
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
