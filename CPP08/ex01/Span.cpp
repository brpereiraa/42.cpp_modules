#include "Span.hpp"
#include <climits>
#include <algorithm>
#include <vector>

Span::Span(unsigned int len) : len(len){}
Span::Span() : len(0){}
Span::~Span(){}
Span::Span(const Span &other) : len(other.getLen()) {} 


unsigned int Span::getLen() const { return this->len; }
std::vector<int> Span::getArray() const { return this->arr; }


void Span::addNumber(int nbr){
    if (this->arr.size() >= this->len)
        return ;
    this->arr.push_back(nbr);
}

unsigned int Span::longestSpan() {
    if (this->arr.size() < 2)
        throw EmptyArrayException();

    std::vector<int> data = this->arr;
    std::sort(data.begin(), data.end());
    return static_cast<unsigned int>(data.back() - data.front());
}

unsigned int Span::shortestSpan() {
    if (this->arr.size() < 2)
        throw EmptyArrayException();

    std::vector<int> data = this->arr;
    std::sort(data.begin(), data.end());

    unsigned int span = UINT_MAX;
    for (size_t i = 1; i < data.size(); ++i) {
        unsigned int diff = static_cast<unsigned int>(data[i] - data[i - 1]);
        if (diff < span)
            span = diff;
    }

    return span;
}


const char *Span::EmptyArrayException::what() const throw() {
    return ("Array needs to have more than 1 member.");
}

const char *Span::OutOfBoundsException::what() const throw() {
    return ("Error, tried to access position out of bounds.");
}

