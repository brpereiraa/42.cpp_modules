#include "./Dog.hpp"

Dog::Dog(){
    std::cout << "Default constructor for class Dog has been called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Destructor for class Dog has been called" << std::endl;
}

Dog::Dog(const Dog &dog){
    *this = dog;

    std::cout << "Copy constructor for class Dog has been called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog){
    if (this != &dog){
        this->type = dog.type;
    }
    
    return (*this);
}

void Dog::makeSound(){
    std::cout << "Dog makes dog noise" << std::endl;
}