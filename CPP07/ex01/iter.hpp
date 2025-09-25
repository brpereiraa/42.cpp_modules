#pragma once
#include <iostream>
#include <cstdlib>

template <typename T>
void iter(T *arr, int len, void(*function)(const T &arr)) {
        for (int i = 0; i < len; i++){
                function(arr[i]);
        }
}

template <typename T>
void iter(T *arr, int len, void(*function)(T &arr)) {
        for (int i = 0; i < len; i++){
                function(arr[i]);
        }
}
