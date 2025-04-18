#ifndef DOG_H
# define DOG_H

# include "./Animal.hpp"
# include "./Brain.hpp"

class Dog: public Animal {
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