#include "./Fixed.hpp"

//Constructor-----------------------

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->fvalue = 0;
}

Fixed::Fixed(const int nbr) {
    this->fvalue = (nbr << Fixed::bits);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr) {
    this->fvalue = roundf(nbr * (1 << Fixed::bits));
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &cp) {
    std::cout << "Copy constructor called" << std::endl;
    *this = cp;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//Methods---------------------------------

float Fixed::toFloat(void) const {
    return (((float)this->fvalue / (float)(1 << Fixed::bits)));
}

int Fixed::toInt(void) const {
    return ((this->fvalue >> Fixed::bits));
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fvalue);
}

void Fixed::setRawBits(int nbr) {
    std::cout << "setRawBits member function called" << std::endl;
    this->fvalue = nbr;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (a > b) ? a : b;
}

//Operators Overload---------------------

Fixed &Fixed::operator=(const Fixed &cp) {
    if (this != &cp)
        this->fvalue = cp.getRawBits();

    return (*this);
}

std::ostream &operator<<(std::ostream &out, const Fixed &cp) {
    out << cp.toFloat();

    return (out);
}

bool Fixed::operator>(const Fixed &cp) const {
    return this->fvalue > cp.fvalue;
}

bool Fixed::operator<(const Fixed &cp) const {
    return this->fvalue < cp.fvalue;
}

bool Fixed::operator>=(const Fixed &cp) const {
    return this->fvalue >= cp.fvalue;
}

bool Fixed::operator<=(const Fixed &cp) const {
    return this->fvalue <= cp.fvalue;
}

bool Fixed::operator==(const Fixed &cp) const {
    return this->fvalue == cp.fvalue;
}

bool Fixed::operator!=(const Fixed &cp) const {
    return this->fvalue != cp.fvalue;
}

Fixed Fixed::operator+(const Fixed &other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.fvalue == 0) {
        throw std::runtime_error("Division by zero");
    }
    return Fixed(this->toFloat() / other.toFloat());
}

//Arithmetic Overload--------------------

Fixed &Fixed::operator++() {
    this->fvalue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    this->fvalue++;
    return temp;
}

Fixed &Fixed::operator--() {
    this->fvalue--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    this->fvalue--;
    return temp;
}
