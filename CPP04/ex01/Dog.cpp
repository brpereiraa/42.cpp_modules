#include "./Dog.hpp"

//---Canonical Form----------

Dog::Dog(): brain(new Brain()){
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(){
    delete brain;

    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &dog): Animal(dog), brain(new Brain(*dog.brain)){
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

Brain *Dog::getBrain() const {
    return (this->brain);
}