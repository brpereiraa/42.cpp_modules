#include "./WrongCat.hpp"

//---Canonical Form----------

WrongCat::WrongCat(): WrongAnimal(){
    this->type = "WrongCat";
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &animal): WrongAnimal(animal){
    *this = animal;

    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &animal){
    if (this != &animal){
        this->type = animal.type;
    }

    return (*this);
}

//-----------Class methods------------

void WrongCat::makeSound(){
    std::cout << "WrongCat makes wrong cat sound" << std::endl;
}