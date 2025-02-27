#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>
#include <string>

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal &animal);
        virtual ~AAnimal();
        AAnimal &operator=(const AAnimal &animal);

        virtual void makeSound() const = 0;
        void setType(const std::string &type);
        std::string getType() const;
};

#endif