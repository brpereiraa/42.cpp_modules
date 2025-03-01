#ifndef CAT_H
# define CAT_H

# include "./Animal.hpp"
# include "./Brain.hpp"
# include <string>
# include <iostream>

class Cat: public Animal {
    private:
        Brain *brain;

    public:
        Cat();
        virtual ~Cat();
        Cat(const Cat &cp);
        Cat &operator=(const Cat &cat);

        void makeSound() const;
        Brain *getBrain() const;
 
};

#endif