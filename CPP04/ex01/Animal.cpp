#include "./Animal.hpp"

Animal::Animal(){
    std::cout << "Default constructor for Animal has been called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Destructor for class Animal has been called" << std::endl;
}

Animal::Animal(const Animal &animal){
    *this = animal;

    std::cout << "Copy constructor for class Animal called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal){
    if (this != &animal){
        this->type = animal.type;
    }

    return (*this);
}

void Animal::makeSound(){
    std::cout << "Animal makes animal sound" << std::endl;
}
