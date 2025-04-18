#ifndef BRAIN_H
# define BRAIN_H

#include <string>
#include <iostream>

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        
        Brain &operator=(const Brain &brain);
};

#endif