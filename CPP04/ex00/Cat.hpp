#ifndef CAT
# define CAT

# include "./Animal.hpp"
# include <string>
# include <iostream>

class Cat: Animal {
    private:


    public:
        Cat();
        ~Cat();
        Cat(const Cat &cp);

        Cat &operator=(const Cat &cat);
        void makeSound();
};

#endif