#include "./Animal.hpp"

//---Canonical Form----------

Animal::Animal(){
    this->type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &animal){
    *this = animal;

    std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal){
    if (this != &animal){
        this->type = animal.type;
    }

    return (*this);
}

//-----------Class methods------------

void Animal::makeSound() const{
    std::cout << "Animal makes animal sound" << std::endl;
}

void Animal::setType(const std::string &type){
    this->type = type;
}

std::string Animal::getType(void) const {
    return this->type;
}