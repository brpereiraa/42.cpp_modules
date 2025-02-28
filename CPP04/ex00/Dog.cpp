#include "./Dog.hpp"

//---Canonical Form----------

Dog::Dog(){
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog){
    *this = dog;

    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog){
    if (this != &dog){
        this->type = dog.type;
    }
    
    return (*this);
}

//-----------Class methods------------

void Dog::makeSound() const{
    std::cout << "Dog makes dog noise" << std::endl;
}