#include "./WrongAnimal.hpp"

//---Canonical Form----------

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal){
    *this = animal;

    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal){
    if (this != &animal){
        this->type = animal.getType();
    }

    return (*this);
}

//-----------Class methods------------

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal makes wrong animal sound" << std::endl;
}

void WrongAnimal::setType(const std::string &type){
    this->type = type;
}

std::string WrongAnimal::getType(void) const {
    return this->type;
}