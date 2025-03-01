#ifndef DOG_H
# define DOG_H

# include "./AAnimal.hpp"
# include "./Brain.hpp"

class Dog: public AAnimal {
    private:
        Brain *brain;

    public:
        Dog();
        virtual ~Dog();
        Dog(const Dog &dog);
        Dog &operator=(const Dog &dog);

        void makeSound() const;
        Brain *getBrain() const;
};

#endif