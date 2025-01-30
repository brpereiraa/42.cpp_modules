#include <string>
#include <iostream>

class Brain {
    private:
        std::string *ideas;

    public:
        Brain();
        ~Brain();
        Brain(const Brain &brain);
        
        Brain &operator=(const Brain &brain);
};