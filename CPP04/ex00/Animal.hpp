#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal &Animal);
        virtual ~Animal();
        Animal &operator=(const Animal &animal);

        virtual void makeSound() const;
        void setType(const std::string &type);
        std::string getType() const;
};

#endif