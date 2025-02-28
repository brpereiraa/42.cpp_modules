#ifndef WRONGCAT_H
# define WRONGCAT_H

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    protected:
        std::string type;

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &animal);
        
        WrongCat &operator=(const WrongCat &animal);
        virtual void makeSound() const;

};


#endif