#include "./Cat.hpp"

//---Canonical Form----------

Cat::Cat(): Animal(){
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat){
    *this = cat;

    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat){
    if (this != &cat){
        this->type = cat.type;
    }

    return (*this);
}

//-----------Class methods------------

void Cat::makeSound() const{
    std::cout << "Cat makes cat sound" << std::endl;
}