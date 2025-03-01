#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal {
    protected:
        std::string type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal &operator=(const WrongAnimal &animal);
        
        void makeSound() const;
        void setType(const std::string &type);
        std::string getType() const;
};


#endif