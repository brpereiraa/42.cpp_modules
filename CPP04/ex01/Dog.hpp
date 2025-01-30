#ifndef DOG
# define DOG

#include "./Animal.hpp"

class Dog: Animal {
    private:

    public:
        Dog();
        ~Dog();
        Dog(const Dog &dog);

        Dog &operator=(const Dog &dog);
        void makeSound();
};

#endif