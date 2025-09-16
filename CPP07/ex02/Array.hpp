#pragma once

#include <iostream>

template <typename T>
class Array {
        private:
                unsigned int len;
                T *arr;

        public:
               Array();
               Array(unsigned int n);
               Array(const Array &cp);
               ~Array();

               unsigned int size() const;
               Array &operator=(const Array &cp);
               T &operator[](unsigned int index);
};

#include "Array.tpp"
