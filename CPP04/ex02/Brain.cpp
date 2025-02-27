#include "./Brain.hpp"

Brain::Brain(){
    for (int i = 0; i < 100; ++i)
		ideas[i] = "Default idea";
    
    std::cout << "Default constructor for class Brain has been called" << std::endl;
}

Brain::~Brain(){
    std::cout << "Default destructor for class Brain has been called" << std::endl;
}

Brain::Brain(const Brain &brain){
    for (int i = 0; i < 100; ++i)
        ideas[i] = brain.ideas[i];

    std::cout << "Copy constructor for class Brain has been called" << std::endl;
}

Brain &Brain::operator=(const Brain &brain){
    if (this != &brain){
        for (int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
    }

    return (*this);
}