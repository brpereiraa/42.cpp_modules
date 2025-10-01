#pragma once

#include <exception>
#include <vector>

class Span {
    private:
        unsigned int len;
        std::vector<int> arr;

    public:
        Span();
        Span(unsigned int len);
        Span(const Span &other);
        ~Span();

        const std::vector<int> getArray() const;
        const unsigned int getLen() const;
        
        void addNumber(int nbr);
        unsigned int shortestSpan();
        unsigned int longestSpan();

        class SpaceException : public std::exception {
            const char *what() const throw();
        };

        class OutOfBoundsException : public std::exception {
            const char *what() const throw();
        };

        class EmptyArrayException : public std::exception {
            const char *what() const throw();
        };
};
