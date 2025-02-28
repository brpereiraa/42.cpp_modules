#include "./AAnimal.hpp"

//---Canonical Form----------

AAnimal::AAnimal(){
    this->type = "Animal";
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::~AAnimal(){
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal){
    *this = animal;

    std::cout << "Animal copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &animal){
    if (this != &animal){
        this->type = animal.getType();
    }

    return (*this);
}

//-----------Class methods------------

void AAnimal::setType(const std::string &type){
    this->type = type;
}

std::string AAnimal::getType(void) const {
    return this->type;
}