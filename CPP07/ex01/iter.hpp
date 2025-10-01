#pragma once
#include <iostream>
#include <cstdlib>

template <typename T, typename F >
void iter(T const *arr, int len, F func) {
        for (int i = 0; i < len; i++){
                func(arr[i]);
        }
}

template <typename T, typename F>
void iter(T *arr, int len, F func) {
        for (int i = 0; i < len; i++){
                func(arr[i]);
        }
}
