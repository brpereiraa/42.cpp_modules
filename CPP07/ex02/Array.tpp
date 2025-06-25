#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"

template <typename T>
Array::Array(){
    this->len = 0;
    this->arr = NULL;

    std::cout << "Array constructor" << std::endl;
    arr = new T[0];
}

template <typename T>
Array::Array(int len){
    this->size = len;
    this->arr = NULL;

    std::cout << "Array length constructor" << std::endl;
    arr = new T[n];
}

template <typename T>
Array::Array(const Array<T> &cp){
    this->arr = NULL;
    *this-> cp;

    std::cout << "Array copy constructor" << std::endl;
}

template <typename T>
Array::~Array(){
    std::cout << "Array destructor" << std::endl;
    delete [] this->arr;
}

template <typename T>
unsigned int Array::size() const{
    return (this->size)
}

template <typename T>
T &Array::operator[](unsigned int index){

}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &cp){
    if (this != &cp){
        if (this->arr)
            delete [] this->arr;
        this->arr = new T[cp.len];
        this->len = cp.len;
        for (unsigned int i = 0; i < cp.len; i++)
            this->arr[i] = cp.arr[i];

    }
}

#endif
