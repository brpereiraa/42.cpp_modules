#ifndef DOG_H
# define DOG_H

#include "./Animal.hpp"

class Dog: public Animal {
    private:

    public:
        Dog();
        ~Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);

        void makeSound() const;
};

#endif