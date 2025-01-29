#ifndef ANIMAL
# define ANIMAL

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string type);
        Animal(const Animal &Animal);
        virtual ~Animal();

        Animal &operator=(const Animal &animal);
        virtual void makeSound();
};

#endif