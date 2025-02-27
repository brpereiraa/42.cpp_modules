#ifndef CAT_H
# define CAT_H

# include "./AAnimal.hpp"
# include "./Brain.hpp"
# include <string>
# include <iostream>

class Cat: public AAnimal {
    private:
        Brain *brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat &cp);
        Cat &operator=(const Cat &cat);

        void makeSound() const;
        Brain *getBrain() const;
 
};

#endif