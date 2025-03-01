#ifndef CAT_H
# define CAT_H

# include "./Animal.hpp"
# include <string>
# include <iostream>

class Cat: public Animal {
    private:

    public:
        Cat();
        ~Cat();
        Cat(const Cat &cp);
        Cat &operator=(const Cat &cat);

        void makeSound() const;
 
};

#endif