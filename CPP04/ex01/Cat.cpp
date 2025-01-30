#include "./Cat.hpp"

Cat::Cat(){
    brain = new Brain();

    std::cout << "Default constructor for class Cat has been called" << std::endl;
}

Cat::~Cat(){
    delete brain;

    std::cout << "Default destructor for class Cat has been called" << std::endl;
}

Cat::Cat(const Cat &cat){
    *this = cat;

    std::cout << "Copy constructor for class Cat has been called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat){
    if (this != &cat){
        this->type = cat.type;
    }

    return (*this);
}

void Cat::makeSound(){
    std::cout << "Cat makes cat sound" << std::endl;
}