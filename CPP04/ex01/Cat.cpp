#include "./Cat.hpp"

//---Canonical Form----------

Cat::Cat(): brain(new Brain()){
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat), brain(new Brain(*cat.brain)){
    *this = cat;

    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat){
    if (this != &cat){
        this->type = cat.getType();
    }

    return (*this);
}

//-----------Class methods------------

void Cat::makeSound() const {
    std::cout << "Cat makes cat sound" << std::endl;
}

Brain *Cat::getBrain() const {
    return (this->brain);
}