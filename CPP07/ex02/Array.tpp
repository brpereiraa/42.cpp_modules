#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array(){
    this->len = 0;
    this->arr = NULL;

    std::cout << "Array constructor" << std::endl;
    arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int len){
    this->len = len;
    this->arr = NULL;

    std::cout << "Array length constructor" << std::endl;
    arr = new T[len];
}

template <typename T>
Array<T>::Array(const Array<T> &cp){
    this->arr = NULL;
    *this = cp;

    std::cout << "Array copy constructor" << std::endl;
}

template <typename T>
Array<T>::~Array(){
    std::cout << "Array destructor" << std::endl;
    delete [] this->arr;
}

template <typename T>
unsigned int Array<T>::size() const{
    return (this->len);
}

template <typename T>
T &Array<T>::operator[](unsigned int index){
    if (index >= this->len)
        throw std::out_of_range("Index out of range");
    return this->arr[index];
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

    return *this;
}
