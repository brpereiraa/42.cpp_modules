#ifndef CAT_H
# define CAT_H

# include "./Animal.hpp"
# include "./Brain.hpp"
# include <string>
# include <iostream>

class Cat: Animal {
    private:
        Brain *brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat &cp);

        Cat &operator=(const Cat &cat);
        void makeSound();
};

#endif