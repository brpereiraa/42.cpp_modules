#include "Span.hpp"
#include <algorithm>
#include <vector>

Span::Span(unsigned int len) : len(len){}
Span::Span() : len(0){}
Span::~Span(){}
Span::Span(const Span &other) : len(other.getLen()) {} 


const unsigned int Span::getLen() const { return this->len; }
const std::vector<int> Span::getArray() const { return this->arr; }


void Span::addNumber(int nbr){
    if (this->arr.size() >= this->len)
        return ;
    this->arr.push_back(nbr);
}

unsigned int Span::longestSpan(){
    if (this->arr.size() < 2)
        throw EmptyArrayException();
    
    unsigned int span, temp;

    std::vector<int> data = this->arr;
    std::sort(data.begin(), data.end());
    
    span = 0;
    for (int i = 1; i < data.size(); i++){
        temp = data.at(i) - data.at(i - 1);
        if (temp > span)
            span = temp;
    }

    return span;
}

unsigned int Span::shortestSpan(){
    if (this->arr.size() < 2)
        throw EmptyArrayException();
    
    unsigned int span, temp;

    std::vector<int> data = this->arr;
    std::sort(data.begin(), data.end());
    
    span = 0;
    for (int i = 1; i < data.size(); i++){
        temp = data.at(i) - data.at(i - 1);
        if (temp > span)
            span = temp;
    }

    return span;
}


const char *Span::EmptyArrayException::what() const throw() {
    return ("Array needs to have more than 1 member.");
}

const char *Span::OutOfBoundsException::what() const throw() {
    return ("Error, tried to access position out of bounds.");
}

